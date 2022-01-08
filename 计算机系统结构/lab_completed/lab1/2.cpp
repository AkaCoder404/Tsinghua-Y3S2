// 测量 L1 Cache Line Size
#include "stdio.h"
#include <time.h>

int main() {
    clock_t start, end;
    int i = 1;
    int step = 1;
    int period = 2048;
   // array of size 4096KB
    int size = 1024 * 1024; 
    int *arr = new int[size];
    int pos = 0;                  
    while (step < 1024 * 4) {
      start = clock();
      for (int j = 0; j < period; j++) {
          arr[pos] = 1;
          pos = (pos + step) % size;
      }
      end = clock();
      printf("step = %dB, time = %ld ms\n", step * 4, end - start);
      step *= 2;
    }
    delete[] arr;
}
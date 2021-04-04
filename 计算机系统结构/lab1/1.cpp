// 测量 L1 Data Cache Size 和 L2 Data Cache Size
#include "stdio.h"
#include <time.h>

using namespace std;
int main() {
    int arrlen = 1;
    clock_t start, end;
    int i = 1;
    // steps 4, 16, 32, 64
    int step = 64;
    // number of accesses
    int period = 1024 * 8;
  	int src = 0;
    // 从4KB到32768KB作测试
    while (i <= 32768) {
        arrlen = i * 1024; // 1KB = 1024B
        int *arr = new int[arrlen]; 
      	int pos = 0;
        start = clock();   
        for (int j = 0; j < period; j++) {
            src = arr[pos];
            pos = (pos + step) % arrlen;
        }
        end = clock();
        printf("array size = %dKB, time = %ld ms\n", i * 4, end - start);
        delete[] arr;
        i = i * 2;
    }
}   
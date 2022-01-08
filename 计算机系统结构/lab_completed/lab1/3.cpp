// 测量 L1 Cache 的相联度
#include "stdio.h"
#include <time.h>

using namespace std;
int main()
{
    clock_t start, end;
    int n = 0;
    int nblock = 1;
    // 2x L1 Cache Size of 258KB, for array size
    int size = 1024 * 64;
    int visit_times = 1024 * 8;
    // access amount is size / 2
    int *arr = new int[size];
    int blocklength = size;
    while (nblock < size / 8) { 
        nblock *= 2;
        n += 1;
        blocklength /= 2;
        start = clock();
        for (int j = 0; j < (visit_times * 2 / nblock); j++)
            for (int i = 0; i < nblock; i += 2)
                arr[i * blocklength + j] = 1;
        end = clock();
        printf("n= %d, time = %ld ms\n", n,  end - start);
    }
}
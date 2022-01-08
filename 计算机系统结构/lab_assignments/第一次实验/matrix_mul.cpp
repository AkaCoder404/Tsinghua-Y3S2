#include <iostream>   
#include <time.h>
#include <string.h>
#include <math.h>
using namespace std;   

#define BLOCK_SIZE 16

int main() {
	clock_t start, finish;
	clock_t start_new, finish_new;

	register int i, j, k;
	
	int (*a)[1000], (*b)[1000];
	a = new int[1000][1000];
	b = new int[1000][1000];
    
	
	for(i = 0; i < 1000; i ++) {
		for(j = 0; j < 1000; j ++) {
			a[i][j] = i % (j + 1);
			b[i][j] = i / (j + 1);
		}
	}

	//存放A*B的结果
	int (*c)[1000], (*d)[1000];
	c = new int[1000][1000];
	d = new int[1000][1000];

	//初始化为0
	memset(d, 0, 1000 * 1000 * sizeof(int));

	start_new = clock();
	//可以修改的部分  开始
	//======================================================
	start = clock();
	for (i = 0; i < 1000; i ++)
		for (j = 0; j < 1000; j ++)
			for (k = 0; k < 1000; k ++)
				d[i][j] += a[i][k] * b[k][j];
	//可以修改的部分   结束
	//======================================================
	finish_new = clock();

	int (*a_)[1000], (*b_)[1000];
	a_ = new int[1000][1000];
	b_ = new int[1000][1000];
    

	for (i = 0; i < 1000; i ++) {
		for (j = 0; j < 1000; j ++) {
			a_[i][j] = i % (j + 1);
			b_[i][j] = i / (j + 1);
		}
	}

	//初始化为0
	memset(c, 0, 1000 * 1000 * sizeof(int));

	start = clock();
	for (i = 0; i < 1000; i ++)
		for (j = 0; j < 1000; j ++)
			for (k = 0; k < 1000; k ++)
				c[i][j] += a_[i][k] * b_[k][j];
	finish = clock();
	

	//对比两次的结果
	for(i = 0; i < 1000; i++) {
		for(j = 0; j < 1000; j++) {
			if (c[i][j] != d[i][j]) {
				cout << "you have got an error in algorithm modification!" << endl;
				exit(1);
			}
		}
	}

	cout << "time spent for original method : " << (double)(finish - start) / CLOCKS_PER_SEC << " s" << endl;
	cout << "time spent for new method : " << (double)(finish_new - start_new) / CLOCKS_PER_SEC << " s" << endl;
	cout << "time ratio of performance optimization : " << (double)(finish - start) / (finish_new - start_new) << endl;
	return 0;
}

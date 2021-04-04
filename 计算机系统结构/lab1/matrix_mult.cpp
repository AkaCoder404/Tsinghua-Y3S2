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
	// for (i = 0; i < 1000; i ++)
	// 	for (j = 0; j < 1000; j ++)
	// 		for (k = 0; k < 1000; k ++)
	// 			d[i][j] += a[i][k] * b[k][j];






    // optimization method 1: take transpose of B, then multiply
    // int (*bT)[1000] =new int[1000][1000];
    // memset(bT, 0, 1000 * 1000 * sizeof(int));   

    // // transpose
    // for (i = 0; i < 1000; i++) 
    //     for( j = 0; j < 1000; j++) 
    //        bT[j][i] = b[i][j];
    // // mult
    // for (i = 0; i < 1000; i ++)
	// 	for (j = 0; j < 1000; j ++)
	// 		for (k = 0; k < 1000; k ++)
	// 			d[i][j] += a[i][k] * bT[j][k];



    // optimization method 2: loop next optimization

    // int (*aT)[1000] = new int[1000][1000];
    // memset(aT, 0, 1000 * 1000 * sizeof(int));

    // // transpose
    // // for (i = 0; i < 1000; i++) 
    // //     for (j = 0; j < 1000; j++) 
    // //         aT[j][i] = a[i][j];

    int steps = 2;
    for (i = 0; i < 1000; i += steps) {
		for (j = 0; j < 1000; j += steps) {
            int c1, c2, c3, c4;
            c1 = c2 = c3 = c4 = 0;
			for (k = 0; k < 1000; k += 1) {
                c1 += b[k][j + 0] * a[i + 0][k];
                c2 += b[k][j + 1] * a[i + 0][k];
                c3 += b[k][j + 0] * a[i + 1][k];
                c4 += b[k][j + 1] * a[i + 1][k];
                // c1 += b[k][j + 0] * aT[k][i+0];
                // c2 += b[k][j + 1] * aT[k][i+0];
                // c3 += b[k][j + 0] * aT[k][i+1];
                // c4 += b[k][j + 1] * aT[k][i+1];
            }
				// d[i][j] += a[i][k] * bT[j][k];
            d[i + 0][j + 0] = c1;
            d[i + 0][j + 1] = c2;
            d[i + 1][j + 0] = c3;
            d[i + 1][j + 1] = c4;
        }
    }


    // optmization method 3: partitioned block matrix
    // int s = 128;
    // for(int jj=0;jj< 1000;jj+= s){
    //     for(int kk=0;kk<1000;kk+= s){
    //         for(int i=0;i<1000;i++){
    //             for(int j = jj; j<((jj+s)>1000?1000:(jj+s)); j++){
    //                 int temp = 0;
    //                 for(int k = kk; k<((kk+s)>1000?1000:(kk+s)); k++){
    //                         temp += a[i][k]*b[k][j];
    //                 }
    //                 d[i][j] += temp;
    //             }
    //         }
    //     }
    // }


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

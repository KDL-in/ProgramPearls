#include "general.h""
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cstring> 
using namespace std;


//复制数组A到数组B 
void copyArr(int A[],int B[],int n){
	memcpy(B,A,sizeof(A[0])*n);
}
//计算n次执行函数func的开销 
double calSpending(void (*func)(),int n){
	clock_t s,e;
	s = clock();
	for(int i = 0; i < n; i++){
		func();
	}
	e = clock();
	return ((double)(e-s))/CLK_TCK;
}
int randint(int a, int b){	
	return a + (RAND_MAX * rand() + rand()) % (b + 1 - a);
}
int * genRandomSet(int *x,int n,int k){
	int p,t;
	srand((unsigned) time(NULL));
	for (int i = 0; i < n; i++)
		x[i] = i;
	for (int i = 0; i < k; i++) {
		p = randint(i, n-1);
		t = x[p]; x[p] = x[i]; x[i] = t;
	}
}
void printArr(int arr[], int n){
	for(int i = 0; i < n; ++i){
		printf("%d ",arr[i]);
	}
	printf("\n");
}



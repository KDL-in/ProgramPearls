#ifndef _GENERAL_H 
#define _GENERAL_H 

//生成a到b之间的随机数 
int randint(int a, int b);
//生成随机数集合,随机数属于[0,n),共k个 
int * genRandomSet(int *x,int n,int k);


//计算n次执行函数func的开销 
double calSpending(void (*func)(),int n);

//复制数组A到数组B 
void copyArr(int A[],int B[],int n); 

//打印一维数组 
void printArr(int arr[], int n);
#endif

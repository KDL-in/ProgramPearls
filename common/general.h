#ifndef _GENERAL_H 
#define _GENERAL_H 

//����a��b֮�������� 
int randint(int a, int b);
//�������������,���������[0,n),��k�� 
int * genRandomSet(int *x,int n,int k);


//����n��ִ�к���func�Ŀ��� 
double calSpending(void (*func)(),int n);

//��������A������B 
void copyArr(int A[],int B[],int n); 

//��ӡһά���� 
void printArr(int arr[], int n);
#endif

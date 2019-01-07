#include "../common/general.h"
#include <algorithm>
#include <cstdio>
#include <cstring>
#include<set>
using namespace std;
const int MAXN = 1E7;
//����ģ�����λͼ
#define SHIFT 5
#define STEP 32
#define MASK 0x1F
int arr[MAXN];
int temp[MAXN]; 
int bitmap[1+MAXN/STEP];

//��ʼ���������
int* init(){
	return genRandomSet(arr,MAXN,MAXN);
}
//ʹ�ÿ������� 
void quickSort(){
	copyArr(arr,temp,MAXN);//��������,ģ������io���� 
	sort(temp,temp+MAXN);
}
//ʹ��stl set sort
void setSort(){
	copyArr(arr,temp,MAXN);//�������� 
	set<int>s;
	for(int i = 0; i<MAXN;++i){
		s.insert(temp[i]);
//		printf("%d\n",temp[i]);
	}
//	set<int>::iterator it;
//	printArr(arr,MAXN);            
//	for(it=s.begin();it!=s.end();it++)  //ʹ�õ��������б��� 
//	{
//		printf("%d\n",*it);
//	}

} 
//����ģ�����λͼ
void setBit(int i){
	( bitmap[(i>>SHIFT)])|=(1<<(i&MASK));
}
void cls(int i){
	(bitmap[(i>>SHIFT)])&=(1<<(i&MASK));
}
int test(int i){
	return (bitmap[(i>>SHIFT)])&(1<<(i&MASK));
}
void bitMapSort(){
	copyArr(arr,temp,MAXN);//�������� 
	memset(bitmap,0,sizeof(int)*(1+MAXN/STEP));
	for(int i = 0; i < MAXN; ++i)setBit(i);
//	for(int i = 0; i < MAXN; ++i){
//		if(test(i))printf("%d ",i);
//	}
//	printf("\n");
	
}

void testColumn1(){
	double d1,d2,d3;
	init();//��ʼ������Դ
	 
	//���Կ������� 
	d1 = calSpending(quickSort,1);
	d2 = calSpending(setSort,1);
	d3 = calSpending(bitMapSort,1);
	printf("quicksort | stl set | bitmapsort\n");
	printf("%lf %lf %lf\n",d1,d2,d3);
//	printArr(arr,MAXN);
}


int main(){
	testColumn1();
	return 0;
} 


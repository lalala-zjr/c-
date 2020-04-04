#include<stdio.h>
#define MaxSize 50
// 结构体
typedef struct{
	int data[MaxSize];
	int length;
}SqList;

void InitList(SqList &L){
	int i=0;
	int x;
	do{
		scanf("%d",&L.data[i++]);
	}while((x=getchar())!='\n');
	L.length = i;
}

void PrintList(SqList &L){
	for(int i=0;i<L.length;i++){
		printf("%d ",L.data[i]);
	}
	printf("\n");
}

void ListReverse(SqList &L){
	for(int i = 0;i<L.length/2;i++){
		int t = L.data[i];
		L.data[i] = L.data[L.length-i-1];
		L.data[L.length-i-1] = t;
	}
}

int main(){
	int a;
	SqList L;
	InitList(L);
	ListReverse(L);
	PrintList(L);
	return 0;
}
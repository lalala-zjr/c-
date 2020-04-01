#include<stdio.h>
#define MaxSize 50
//	定义结构体
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

void DeleteOne(SqList &L,int x){
	int c = 0,t=0;
	/*for(int i = 0;i<L.length;i++){
		if(L.data[i] == x){
			c++;
		}
		if(c!=0){
			L.data[i] = L.data[i+c];
			i=i-c;
		}
	}*/
	int a[L.length];
	for(int i = 0;i<L.length;i++){
		if(L.data[i] == x){
			a[c++] = i;
		}
	}
	for(i = a[0];i<L.length;i++){
		if(i == a[t+1]){
			t++;
		}
		a[i] = a[i+1+t];

	}
}

int main(){
	int x;
	SqList L;
	InitList(L);
	printf("请输入需要删除的值x:");
	scanf("%d",&x);.
	DeleteOne(L,x);
	PrintList(L);
	return 0;
}
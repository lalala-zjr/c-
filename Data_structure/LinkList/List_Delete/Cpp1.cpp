#include<iostream>
using namespace std;

typedef struct LNode{
	int data;
	struct LNode *next;
}LNode,*LinkList;

//	头插法建立单链表
LinkList HeadList(LinkList &L){
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	int x;
	LNode *p;
	cin >> x;
	while(x!=999){
		p = (LNode *)malloc(sizeof(LNode));
		p->data = x;
		p->next = L->next;
		L->next = p;
		cin >> x;
	}
	return L;
}

//	输出单链表的data域
void ListPrint(LinkList &L){
	cout << "单链表为：";
	LNode *p = L;
	while(p->next!=NULL){
		cout << p->next->data << " ";
		p = p->next;
	}
	cout << endl;
}

//	查找节点
LNode *GetElem(LinkList L,int i){
	int j = 1;
	LNode *p = L->next;
	if(i==0)
		return L;
	if(i<1)
		return NULL;
	while(p&&j<i){
		p = p->next;
		j++;
	}
	return p;
}

//	删除操作
void ListDelete(LinkList &L){
	int i;
	cout << endl <<"请输入需要删除位置:";
	cin >> i;
	LNode *p = GetElem(L,i-1);
	LNode *q = p->next;
	p->next = q->next;
	free(q);
}

int main(){
	LNode *L;
	L = HeadList(L);
	ListPrint(L);
	ListDelete(L);
	ListPrint(L);
	return 0;
}
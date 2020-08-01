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

//	求表长操作
int ListLength(LinkList &L){
	int count = 0;
	LNode *p = L;
	while(p->next != NULL){
		count++;
		p = p->next;
	}
	return count;
}

int main(){
	LNode *L;
	L = HeadList(L);
	ListPrint(L);
	cout << "表长为: " << ListLength(L) << endl;
	return 0;
}
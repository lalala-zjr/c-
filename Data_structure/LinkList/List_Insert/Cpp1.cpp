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

//	插入操作
void ListInsert(LinkList &L){
	int i,x;
	cout << endl <<"请输入需要插入位置:";
	cin >> i;
	cout << "请输入需要插入的数据:";
	cin >> x;
	LNode *s = (LNode *)malloc(sizeof(LNode));
	s->data = x;
	LNode *p = GetElem(L,i-1);
	s->next = p->next;
	p->next = s;
}

int main(){
	LNode *L;
	L = HeadList(L);
	ListPrint(L);
	ListInsert(L);
	ListPrint(L);
	return 0;
}
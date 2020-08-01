#include<iostream>
using namespace std;

typedef struct LNode{
	int data;
	struct LNode *next;
}LNode,*LinkList;

//	ͷ�巨����������
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

//	����������data��
void ListPrint(LinkList &L){
	cout << "������Ϊ��";
	LNode *p = L;
	while(p->next!=NULL){
		cout << p->next->data << " ";
		p = p->next;
	}
	cout << endl;
}

//	���ҽڵ�
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

//	�������
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
	cout << "��Ϊ: " << ListLength(L) << endl;
	return 0;
}
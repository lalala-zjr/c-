#include<iostream>
using namespace std;
typedef struct LNode {
	int data;
	struct LNode *next;
} *LinkList,LNode;


//	β�彨��������
LinkList List_ToolInsert (LinkList &L){
	int x;
	L = (LinkList)malloc (sizeof(LNode));
	LNode *s,*r = L;
	cin >> x;
	while(x!=999){
		s = (LNode *)malloc(sizeof(LNode));
		s->data = x;
		r->next = s;
		r = s;
		cin >> x;
	}
	r->next = NULL;
	return L;

}

//	���������
void List_print(LinkList &L){
	LNode *s = L;
	while(s->next!=NULL){
		s = s->next;
		cout << s->data << " ";
	}
}

//	��ֵ����
LNode *LocateElem(LinkList L,int x){
	LNode *p = L->next;
	while(p!=NULL && p->data!=x){
		p = p->next;
	}
	return p;
}


int main(){
	LinkList L;
	int x;
	L = List_ToolInsert(L);
	cout << "������Ϊ��";
	List_print(L);
	cout << endl << "��������Ҫ���ҵ�ֵ��";
	cin >> x;
	LNode *s = LocateElem(L,x);
	cout << "���ҵĽڵ�Ϊ��"  << s->data << endl;
	return 0;
}
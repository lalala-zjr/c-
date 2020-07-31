#include<iostream>
using namespace std;
typedef struct LNode {
	int data;
	struct LNode *next;
} *LinkList,LNode;


//	尾插建立单链表
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

//	输出单链表
void List_print(LinkList &L){
	LNode *s = L;
	while(s->next!=NULL){
		s = s->next;
		cout << s->data << " ";
	}
}

//	按序号查找
LNode *GetElem(LinkList L,int i){
	int j=1;
	LNode *p = L->next;
	if(i==0)
		return L;
	if(i<1){
		return NULL;
	}
	while(p&&j<i){
		p = p->next;
		j++;
	}
	return p;
}


int main(){
	LinkList L;
	L = List_ToolInsert(L);
	cout << "则单链表为：";
	List_print(L);
	return 0;
}
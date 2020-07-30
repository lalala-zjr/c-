#include<iostream>
using namespace std;
typedef struct LNode{
	int data;
	struct LNode *next;
} LNode, *LinkList;

LinkList List_HeadInsert(LinkList &L) {
	LNode *s;
	int x;
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	cin >> x;
	while(x!=999){
		s = (LNode *)malloc(sizeof(LNode));
		s->data = x;
		s->next = L->next;
		L->next = s;
		cin >> x;
	}
	return L;
}

void List_print(LinkList &L){
	LNode *s = L;
	
	while(L->next!=NULL){
		s = s->next;
		cout << s->data << " ";
	}
}


int main(){
	LinkList L;
	L = List_HeadInsert(L);
	List_print(L);
	return 0;
}
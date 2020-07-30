#include<iostream>
using namespace std;
typedef struct LNode {
	int data;
	struct LNode *next; 
} LNode,*LinkList;

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

void List_print(LinkList &L){
	LNode *s = L;
	while(s->next!=NULL){
		s = s->next;
		cout << s->data << " ";
	}
}

int main(){
	LinkList L;
	L = List_ToolInsert(L);
	List_print(L);
	return 0;
}
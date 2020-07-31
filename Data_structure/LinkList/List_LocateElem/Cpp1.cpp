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

//	按值查找
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
	cout << "则单链表为：";
	List_print(L);
	cout << endl << "请输入需要查找的值：";
	cin >> x;
	LNode *s = LocateElem(L,x);
	cout << "查找的节点为："  << s->data << endl;
	return 0;
}
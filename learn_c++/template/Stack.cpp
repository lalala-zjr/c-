#include<iostream>
using namespace std;
const int SIZE = 90;
template <class T>
class Stack {
public: 
	Stack();
	void push(T n);
	T pop();
private: 
	T stack[SIZE];
	int tos;
};
template <class T>
Stack<T>::Stack(){
	tos = 0;
}
template <class T>
void Stack<T>::push(T n){
	stack[tos++] = n;
}
template <class T>
T Stack<T>::pop(){
	return stack[--tos];
}
  

int main(){
	Stack<int> s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	for(int i=0;i<3;i++){
		cout << s1.pop() << " " << endl;
	}

	Stack<char> s2;
	s2.push('a');
	s2.push('b');
	s2.push('c');
	for(i=0;i<3;i++){
		cout << s2.pop() << " " << endl;
	}

	Stack<float> s3;
	s3.push(5.6);
	s3.push(4.4);
	s3.push(3.2);
	for(i=0;i<3;i++){
		cout << s3.pop() << " " << endl;
	}
	return 0;
}

/*
	���ʵ��һ��ջ��ģ�壨�������Ա�������壩��
	��Ӧ�ó����д�������ջ���ַ�ջ �͸�����ջ�����ṩһЩ���ݹ���ջ����ջ����ʾ������ 
*/
/*
����һ��JX���ʾ���Σ����εĳ��Ϳ���Ϊ���������ݳ�Ա��
��дһ�����������ĺ���area()����������ΪJX��һ����Ԫ������
ʵ����һ������jx1�����Ϳ�ֱ�Ϊ3��4������area()������ε������
*/
#include<iostream>
class JX{
	int width;
	int height;
public:
	JX(){
		width = 1;
		height = 1;
	}
	JX(int width,int height){
		this->width = width;
		this->height = height;
	}
	friend void area(JX &jx);
};

void area(JX &jx){
	std::cout << jx.width*jx.height << std::endl;
}

int main(){
	JX jx1(3,4);
	area(jx1);
	return 0;
}
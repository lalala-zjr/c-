/*
生成一个JX类表示矩形，矩形的长和宽作为其两个数据成员。
编写一个求矩形面积的函数area()，并将声明为JX的一个友元函数。
实例化一个对象jx1，长和宽分别为3和4。利用area()求出矩形的面积。
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
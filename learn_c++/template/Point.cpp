#include<iostream>
#include<string>
#include<math.h>
using namespace std;
class Point_1D{
protected:
	float x;
public:
	Point_1D(float p = 0.0){
		x = p;
	}
	float distance(){
		if(x > 0){
			return x;
		}else{
			return x*(-1);
		}
	}
};

class Point_2D:public Point_1D{
protected:
	float y;
public:
	Point_2D(float x,float y):Point_1D(x){
		this->y = y;
	}
	float distance(){
		return sqrt(x*x+y*y);
	}
};

class Point_3D:public Point_2D{
protected:
	float z;
public:
	Point_3D(float x,float y,float z):Point_2D(x,y){
		this->z = z;
	}
	float distance(){
		return sqrt(x*x+y*y+z*z);
	}
};

int main(){
	int x;
	float a,b,c,d,e,f;
	while(1){
		cin >> x;
		if(x==0){
			break;
		}else if(x==1){
			cin >> a;
			Point_1D p1(a);
			cout << "Distance from Point " << a << " to original point is " << p1.distance() << endl;
		}else if(x==2){
			cin >> b >> c;
			Point_2D p2(b,c);
			cout << "Distance from Point (" << b << "," << c << ") to original point is " << p2.distance() << endl;
		}else if(x==3){
			cin >> d >> e >> f;
			Point_3D p3(d,e,f);
			cout << "Distance from Point (" << d << "," << e << "," << f << ") to original point is " << p3.distance() << endl;
		}
	}
}

/*
#include<iostream>
#include<math.h>
using namespace std;
class Point_1D
{
protected:
float x;//1D 点的x坐标
public:
//Point_1D(float p = 0.0);
void set_1D(){cin>>x;}
Point_1D(float a=0){x=a;}
float distance(const Point_1D & p2);
};
class Point_2D:public Point_1D
{
protected:
float y;//2D平面上点的y坐标
public:
Point_2D(float a=0,float b=0){x=a;y=b;}
void set_2D(){set_1D();cin>>y;}
float distance(const Point_2D & p2);
};
class Point_3D:public Point_2D
{
protected:
float z;//3D立体空间中点的z坐标
public:
Point_3D(float a=0,float b=0,float c=0){x=a;y=b;z=c;}
void set_3D(){set_2D();cin>>z;}
float distance(const Point_3D & p2);
};
int main()
{
int type;
Point_1D a1,a2;
Point_2D b1,b2;
Point_3D c1,c2;
cin>>type;
while(type)
{
switch(type)
{
case 1:a1.set_1D();a1.distance(a2);break;
case 2:b1.set_2D();b1.distance(b2);break;
case 3:c1.set_3D();c1.distance(c2);break;
}
cin>>type;
}
return 0;
}
float Point_1D::distance(const Point_1D & p2)
{
float a;
a=fabs(x-p2.x);
cout<<"Distance from Point "<<x<<" to original point is "<<a<<endl;
return a;
}
float Point_2D::distance(const Point_2D & p2)
{
float a;
a=sqrt((x-p2.x)*(x-p2.x)+(y-p2.y)*(y-p2.y));
cout<<"Distance from Point("<<x<<","<<y<<") to original point is "<<a<<endl;
return a;
}
float Point_3D::distance(const Point_3D & p2)
{
float a;
a=sqrt((x-p2.x)*(x-p2.x)+(y-p2.y)*(y-p2.y)+(z-p2.z)*(z-p2.z));
cout<<"Distance from Point("<<x<<","<<y<<","<<z<<") to original point is "<<a<<endl;
return a;
}
*/
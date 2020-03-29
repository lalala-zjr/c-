/*#include <iostream>
using namespace std;

template<class T>
class Complex{
public:
	T a;
	T b;
	T dist(){
		return abs(a - b);
	}
};
template<class T>
int main()
{
    MyArray<int> p1;
    MyArray<float> p2;
    MyArray<Complex <int>> p3;
    int ty, size;
    cin>>ty;
    while(ty>0){
        switch(ty){
            case 1:  cout << p1->dist() << endl;  delete p1; break;
            case 2:  cout << p2->dist() << endl;  delete p2; break;
            case 3:  cout << p3->dist() << endl;  delete p3; break;
        }
        cin>>ty;
    }
    return 0;
}*/

#include<iostream>
#include<cmath>
using namespace std;
class Complex{
 private:
     double a, b;
 public:
     Complex()
     {
         a = 0, b = 0;
     }
     Complex(double A, double B)
    {
         a = A, b = B;
     }
     void set(double A, double B)
     {
         a = A, b = B;
     }
     void display()
     {
         cout << a << " " << b << endl;
     }
     friend double operator - (Complex C1, Complex C2);
 };
 
 double operator -(Complex C1, Complex C2)
 {
     return sqrt(pow(C1.a - C2.a, 2.0) + pow(C1.b - C2.b, 2.0));
 }
 
 template<class T>
 double dist(T a, T b)
 {
     return abs(a - b);
 }
 
 int main()
 {
     int flag;
 
    while(cin >> flag, flag != 0)
     {
         if(flag == 1)
         {
             int a, b;
             cin >> a >> b;
             cout << dist(a, b) << endl;
         }
         else if(flag == 2)
         {
             float a, b;
             cin >> a >> b;
             cout << dist(a, b) << endl;
         }
         else if(flag == 3)
         {
             Complex a, b;
             double a1, a2, b1, b2;
             cin >> a1 >> a2 >> b1 >> b2;
             a.set(a1, a2), b.set(b1, b2);
             cout << dist(a, b) << endl;
         }
     }
 
     return 0;
 }

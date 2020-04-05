#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	cin >> str;
	cout << "year:" << str.substr(0,4) << endl;
	cout << "department:" << str.substr(4,2) << endl;
	cout << "class:" << str.substr(6,2) << endl;
}
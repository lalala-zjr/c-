#include<iostream>
#define n 50
using namespace std;


int main(){
	//	初始化
	int a[n];
	int i=0;
	cout << "请输入数据：" << endl;
	while(1){
		cin >> a[i];
		if(a[i]==0){
			break;
		}
		i++;
	}
	//	输出
	cout << "数组中的数据为： " << endl;
	int c=0;
	while(c<i){
		cout << a[c++] << " ";
	}
	//	插入
	cout  << "\n请输入需要插入的位置: " ;
	int p;
	cin >> p;
	if(p>i || p<0){
		cout << "无法插入";
	}else{
		cout  << "请输入需要插入的元素: " ;
		int x;
		cin >> x;
		for(int j=i;j>=p;j--){
			a[j+1] = a[j];
		}
		a[j+1] = x;
	}
	i++;
	cout << "数组中的数据为： " << endl;
	c=0;
	while(c<i){
		cout << a[c++] << " ";
	}
	//	删除
	cout  << "\n请输入需要删除的元素: " ;
	int y,m;
	cin >> y;
	for(int j=0;j<i;j++){
		if(a[j]==y){
			m=j;
		}
	}
	for(m;m<i;m++){
		a[m] = a[m+1];
	}
	i--;
	cout << "数组中的数据为： " << endl;
	c=0;
	while(c<i){
		cout << a[c++] << " ";
	}
	return 0;
}


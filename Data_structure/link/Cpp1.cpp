#include<iostream>
#define n 50
using namespace std;


int main(){
	//	��ʼ��
	int a[n];
	int i=0;
	cout << "���������ݣ�" << endl;
	while(1){
		cin >> a[i];
		if(a[i]==0){
			break;
		}
		i++;
	}
	//	���
	cout << "�����е�����Ϊ�� " << endl;
	int c=0;
	while(c<i){
		cout << a[c++] << " ";
	}
	//	����
	cout  << "\n��������Ҫ�����λ��: " ;
	int p;
	cin >> p;
	if(p>i || p<0){
		cout << "�޷�����";
	}else{
		cout  << "��������Ҫ�����Ԫ��: " ;
		int x;
		cin >> x;
		for(int j=i;j>=p;j--){
			a[j+1] = a[j];
		}
		a[j+1] = x;
	}
	i++;
	cout << "�����е�����Ϊ�� " << endl;
	c=0;
	while(c<i){
		cout << a[c++] << " ";
	}
	//	ɾ��
	cout  << "\n��������Ҫɾ����Ԫ��: " ;
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
	cout << "�����е�����Ϊ�� " << endl;
	c=0;
	while(c<i){
		cout << a[c++] << " ";
	}
	return 0;
}


#include <iostream>
#include <string>
#include <algorithm>
#include<vector>
using namespace std;
/*

��һ��������n r a1 a2 ... an
���У�������200��������n��ʾ�������ݵĸ�����
������200�ķǸ�����r��ʾ�����������˸�������r����������������r+r>=n�������������������
����a1 a2 ... an�Ǹ����n�����ݣ��Ҷ���8λ���ڡ�
���룺5 1 6 5 4 3 2
�����6 3 4 5 2
*/

int main() {
	vector<int> a;
	int n,r,x,i;
	cin >> n >> r;
	for(i=0;i<n;i++){
		cin >> x;
		a.push_back(x);
	}
    if(a.begin()+r <= a.end()-r){
        sort(a.begin()+r,a.end()-r);
    }
	for(i=0;i<n;i++){
		if(i==n-1){
			cout << a[n-1];
		}else{
			cout << a[i] << " ";
		}
	}
	return 0;
}

#include <iostream>
#include <string>
#include <algorithm>
#include<vector>
using namespace std;
/*

在一行内输入n r a1 a2 ... an
其中，不大于200的正整数n表示该组数据的个数；
不大于200的非负整数r表示该组数据两端各自留有r个数不参与排序，若r+r>=n，则该组数据无需排序。
整数a1 a2 ... an是该组的n个数据，且都在8位以内。
输入：5 1 6 5 4 3 2
输出：6 3 4 5 2
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

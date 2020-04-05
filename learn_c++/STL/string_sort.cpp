#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int aa(string x,string y)
{
  if(x>y) return 1;
  else return 0;
}
int main(){
	int n;
	string a;
	//while(1){
		cin >> n;
		vector<string> s;
		for(int i=0;i<n;i++){
			cin >> a;
			s.push_back(a);
		}
		sort(s.begin(),s.end(),aa);
		for(i=0;i<n;i++){
			cout << s[i];
		}
		cout << endl;
	}
	return 0;
}
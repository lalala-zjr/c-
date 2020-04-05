

#include <iostream>
#include <vector>
using namespace std;

vector<int> sieve(int n); //函数声明,求n以内的质数

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    vector<int> ans = sieve(n);

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];
        if (i < ans.size() - 1)cout << " ";
    }
    cout << endl;

    return 0;
}

vector<int> sieve(int n){
	int c = 0,i=3,j=2;
	vector<int> ans;
	if(n>=2){
		ans.push_back(2);
	}
	while(i<n){
		for(j=2;j<i;j++){
			if(i%j==0){
				break;
			}
		}
		if(i==j){
			ans.push_back(j);
		}
		i++;
	}
	return ans;
	
}

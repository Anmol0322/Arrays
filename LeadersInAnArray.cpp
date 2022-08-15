#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(int a[], int n){
	vector<int> ans;
	ans.push_back(a[n-1]);
	int minn = a[n-1];
	for(int i=n-2;i>=0;--i){
		if(a[i]>=minn){
			ans.push_back(a[i]);
			minn = a[i];
		}
	}
	reverse(ans.begin(),ans.end());
	return ans;
}

int main()
{
	int n = 6, A[] = {16,17,4,3,5,2};
	vector<int> ans = leaders(A, n);
	for(auto a: ans) cout<<a<<" ";
	return 0;
}
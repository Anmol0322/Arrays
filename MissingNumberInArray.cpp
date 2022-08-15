#include <bits/stdc++.h>
using namespace std;

int MissingNumber(vector<int>& array, int n) {
	sort(array.begin(),array.end());
    int i = 1;
    while(i<n){
    	if(i != array[i-1]){
    		return i;
    	}
    	i+=1;
    }
}

int main(){
	int N = 5;
	vector<int> A{1,2,3,5};
	int ans;
	ans = MissingNumber(A, N);
	cout << ans;
	return 0;
}
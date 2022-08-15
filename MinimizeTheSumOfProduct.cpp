#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long int minValue(int a[], int b[], int n){
	ll int ans = 0;
	sort(a,a+n);
    sort(b,b+n);
	for(int i=0;i<n;i++){
		ans += a[i] * b[n-i-1];
	}    
	return ans;
}

int main(){
	int N = 3; 
	int A[] = {3, 1, 1};
	int B[] = {6, 5, 4};
	ll int ans;
	ans = minValue(A, B, N);
	cout << ans;
	return 0;
}
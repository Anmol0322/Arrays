#include <bits/stdc++.h>
using namespace std;

int equilibriumPoint(long long a[], int n) {
    if(n==0) return 0;
    if(n==1) return 1;
    int total = 0;
    for(long long i = 0; i<n;i++){
    	total += a[i];
    }
    int left = 0;
	for(long long i=0;i<n;i++){
		left += a[i];
		if(left - (total - a[i+1] - left) == 0){
			return i+2;
		}
	}
	return -1;
}

int main()
{
	int n = 1;
	long long A[] = {23};
	int ans = equilibriumPoint(A, n);
	cout << ans;
	return 0;
}
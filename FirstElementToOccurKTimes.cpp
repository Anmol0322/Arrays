#include<bits/stdc++.h>
using namespace std;

int firstElementKTime(int a[], int n, int k){
	unordered_map<int,int> freq;
    for(int i=0;i<n;i++){
        freq[a[i]]++;
        if(freq[a[i]] == k) return a[i];
    }
    return -1;
}

int main(){
	int n = 7, k = 2;
	int ar[] = {1, 7, 4, 3, 4, 8, 7};
	int ans = firstElementKTime(ar, n, k);
	cout << ans;
	return 0;
}
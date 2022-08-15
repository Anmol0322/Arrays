#include<bits/stdc++.h>
using namespace std;

int func(int arr[],int l, int h, int k){
	while(l<=h){
		int mid = l + (h - l) / 2;
		if(arr[mid] == k) return mid;
		else if(arr[mid] > k) h = mid-1;
		else l = mid + 1; 
	}
	return -1;
}

int binarysearch(int arr[], int n, int k) {
	int ans = func(arr,0,n-1,k);        
	return ans;
}

int main(){
	int arr[] = {1,2,3,4,5};
	int n = 5;
	int k = 4;
	cout << binarysearch(arr, n, k);
	return 0;
}

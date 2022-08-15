#include<bits/stdc++.h>
using namespace std;

void reverseInGroups(int arr[],int n, int k){
	int i = 0;
        while(i<n){
        int left = i;
        int right = min(i+k-1,n-1);
        while(left<right){
            swap(arr[left],arr[right]);
            left+=1;
            right-=1;
        }
        i+=k;
    }
}

int main(){
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(int);
	int k = 3;
	reverseInGroups(arr,n,k);
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
	return 0;
}


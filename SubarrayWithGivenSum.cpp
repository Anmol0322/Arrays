#include<bits/stdc++.h>
using namespace std;

vector<int> subarraySum(int arr[], int n, long long s)
{
	if(s==0){
		return {-1};
	}
	int ptr1 = 0, ptr2 = 0;
	long long sum = arr[0];
	if(sum == s){
		return {1,1};
	}
	while(ptr2 < n-1){
		if(sum + arr[ptr2+1] <= s){
			sum += arr[ptr2+1];
			ptr2++;
		}
		else{
			sum -= arr[ptr1];
			ptr1++;
		}
		if(sum == s){
			return {ptr1+1, ptr2+1};
		}
	}
	return {-1};
}

int main(){
	int N = 5, S = 12;
	int arr[]= {1,2,3,7,5};
	vector<int> ans;
	ans = subarraySum(arr,N,S);
	for(auto a: ans){
		cout<<a<<" ";
	}
}

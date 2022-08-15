#include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
{
    int left=0,right=n-1,curr=0;
    while(left<right){
    	if(a[curr]==0){
    		swap(a[left],a[curr]);
    		left+=1;
    		curr+=1;
    	}
 		else if(a[curr]==2){
    		swap(a[curr],a[right]);
    		right-=1;
    	}
    	else{
    		curr+=1;
    	}
    }
}

int main()
{
	int N = 5, arr[]= {0,2,1,2,0};
	sort012(arr,N);
	for(auto a: arr) cout<<a<<" ";
	return 0;
}
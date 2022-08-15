#include <bits/stdc++.h>
using namespace std;

int maxLen(vector<int>&A, int n)
{   
    unordered_map<int, int> umap;
    int prefixSum = 0;
    int ans=0;
    for(int i = 0;i < n;i++){
    	prefixSum += A[i];
    	if(prefixSum == 0) ans = i + 1;
    	else{
    		if(umap.find(prefixSum)!=umap.end()){
    			ans = max(ans, i - umap[prefixSum]);
	    	}
	    	else{
	    		umap[prefixSum] = i;
	    	}
    	}
    }
    return ans;
}

int main()
{
	int n = 4;
	vector<int> A{-1,1,-1,1};
	int ans = maxLen(A, n);
	cout << ans;
	return 0;
}
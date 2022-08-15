#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) {
		unordered_map<int,int> umap;
		for(int i=0;i<n;i++){
			umap[a1[i]]++;
		}
		int count = 0;
		for(int i=0;i<m;i++){
			if(umap.find(a2[i])!=umap.end()){
				count += 1;
			}
		}
		if(count == m) return "Yes";
		return "No";
}

int main()
{
	int a1[] = {1, 2, 3, 4, 5, 6}, a2[] = {1,2,0};
	int n1 = sizeof(a1)/sizeof(int);	
	int n2 = sizeof(a2)/sizeof(int);
	string ans = isSubset(a1, a2, n1, n2);
	cout << ans;
	return 0;
}
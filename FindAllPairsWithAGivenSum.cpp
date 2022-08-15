#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
{
    vector<pair<int,int>> ans;
    pair<int, int> output;
    unordered_map<int, int> s;
    for(int i=0;i<N;i++){
    	s[A[i]]++;
    }
    for(int i=0;i<M;i++){
    	if(s.find(X-B[i])!=s.end()){
    		output.push_back(X-B[i]);
    		output.push_back(B[i]);
    		ans.push_back(output);
    	}
    }	
}

int main()
{
	int A[] = {1, 2, 4, 5, 7}, B[] = {5, 6, 3, 4, 8} ;
	int X = 9;
	int N = sizeof(A)/sizeof(int);
	int M = sizeof(B)/sizeof(int);
	vector<pair<int,int>> ans;
	ans = allPairs(A, B, N, M, X); 
	for(int i=0;i<ans.size();i++){
		cout<<"h";
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

string commonPrefix(string str1, string str2){
	int n = str1.length(), m = str2.length();
	int i=0,j=0;
	string result = "";
	while(i<=n-1 && j<=m-1){
		if(str1[i] != str2[j]) break;
		result += str1[i];
		i+=1;
		j+=1;
	}
	return result;
}

string longestCommonPrefix (string arr[], int N)
{
    string prefix = arr[0];
    for(int i=1;i<N;i++){
    	prefix = commonPrefix(prefix, arr[i]);
    }
    if(prefix.length() == 0) return "-1";
    return prefix;
}

int main()
{
	int N = 4;
	string arr[] = {"geeksforgeeks", "geeks", "geek", "geezer"};
	string ans = longestCommonPrefix(arr, N);
	cout << ans;
	return 0;
}
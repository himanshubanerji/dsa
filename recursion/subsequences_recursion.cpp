// print every subsequence of an array

// Time Complexity: O(2^n * n)
// for every split we can either take or not take
// therefore 2^n options as well for every take or
// not take we print the array, taking approx n time
// therefore (2^n * n)

// Space Complexity: O(n)
// since max depth is n of recursion tree

#include <bits/stdc++.h>
using namespace std;

void printSubsequence(int arr[], vector<int> &v, int n, int index) {
	if(index >= n) {
		for(auto &it: v) {
			cout << it << " ";
		}
		if(v.size() == 0) {
			cout << "[]";
		}
		
		cout << endl;
		return;
	}

	v.emplace_back(arr[index]);
	printSubsequence(arr,v,n,index+1); // take condition
	v.pop_back();
	printSubsequence(arr,v,n,index+1); // not take 
}

int main() {
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int n; cin >> n;
	int arr[n];
	for(int i=0; i<n; i++) cin >> arr[i];
		
		vector<int> v;
	printSubsequence(arr, v, n, 0);
	
	return 0;
}
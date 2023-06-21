// count the number of subsequence where the sum is k

// Approach: return 1 - base condition satisfies
//			 return 0 - condition not satisfies

#include <bits/stdc++.h>
using namespace std;

int printSubsequenceK(int arr[], int k, int n, int index, int sum) {
	if(index == n) {
		// cannot use (sum == k) with (index == k) condition
		// since we have to return if index reaches n
		// regardless sum == k or not
		if(sum == k) return 1;
		
		else return 0;
	}
	
	int take = printSubsequenceK(arr, k, n, index+1, sum+arr[index]);
	
	int nottake = printSubsequenceK(arr, k, n, index+1, sum);
	
	return take + nottake;
	
}

int main() {
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int n; cin >> n;
	int k; cin >> k;
	int arr[n];
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	vector<int> v;
	cout << printSubsequenceK(arr, k, n, 0, 0);
	
	return 0;
}
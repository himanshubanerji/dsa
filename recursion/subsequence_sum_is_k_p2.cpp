// print any one subsequence where sum is k
#include <bits/stdc++.h>
using namespace std;

bool printSubsequenceK(int arr[], vector<int> &v, int k, int n, int index, int sum) {
	if(index == n) {
		// cannot use (sum == k) with (index == k) condition
		// since we have to return if index reaches n
		// regardless sum == k or not
		if(sum == k) {
			for(auto &it: v) {
				cout << it << " ";
			}
			cout << '\n';
			return true;
		}
		return false;
	}
	
	v.emplace_back(arr[index]);
	if(printSubsequenceK(arr, v, k, n, index+1, sum+arr[index]) == true) {
		return true;
	}
	v.pop_back();
	if(printSubsequenceK(arr, v, k, n, index+1, sum) == true) {
		return true;
	}
	return false;
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
	printSubsequenceK(arr, v, k, n, 0, 0);
	
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

void calcPrefixSum(vector<vector<int>>& nums, vector<vector<int>>& pf) {
	for(int i = 1; i < nums.size(); i++) {
		for(int j = 1; j < nums[0].size(); j++) {
			pf[i][j] = nums[i][j] + pf[i - 1][j] + pf[i][j - 1] - pf[i - 1][j - 1];
		}
	}
}

int main() {
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int n, m;
	cin >> n >> m;
	
	vector<vector<int>> nums(n + 1, vector<int>(m + 1));
	for(int i = 1; i<= n; i++) {
		for(int j = 1; j <= m; j++) {
			cin >> nums[i][j];
		}
	}
	
	vector<vector<int>> pf(n + 1, vector<int>(m + 1, 0));
	calcPrefixSum(nums, pf);
	
	int q;
	cin >> q;
	while(q--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		
		cout << pf[c][d] - pf[a - 1][d] - pf[c][b - 1] + pf[a - 1][b - 1] << '\n';
	}
	
	return 0;
}
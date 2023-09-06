#include <bits/stdc++.h>
using namespace std;

void calcPrefixSum(vector<int>& nums, vector<int>& pf) {
	pf[1] = nums[1];
	for(int i = 2; i <= nums.size(); i++) {
		pf[i] += pf[i - 1] + nums[i];
	}
}

int main() {
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int n;
	cin >> n;
	
	vector<int> v(n + 1, 0);
	for(int i = 1; i <= n; i++) {
		cin >> v[i];
	}
	
	vector<int> pf(n + 1);
	calcPrefixSum(v, pf);
	
	int q; cin >> q;
	while(q--) {
		int l, r;
		cin >> l >> r;
		
		cout << pf[r] - pf[l - 1] << '\n';
		
	}
	
	return 0;
}
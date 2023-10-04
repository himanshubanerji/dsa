#include <bits/stdc++.h>
using namespace std;

#define SIZE (int)2e5 + 1

int pf_sum[SIZE];

int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(0);	
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int n, k, q;
	cin >> n >> k >> q;
	
	int a , b;
	for(int i = 0; i < n; i++) {
		cin >> a >> b;
		// for(int j = a; j <= b; j++) {
		// 	pf_sum[j]++;
		// }
		pf_sum[a]++;
		pf_sum[b + 1]--;
	}
	
	for(int i = 1; i < SIZE; i++) {
		pf_sum[i] += pf_sum[i - 1];
	}
	
	for(int i = 0; i < SIZE; i++) {
		if(pf_sum[i] >= k) pf_sum[i] = 1;
		else pf_sum[i] = 0;
		
		pf_sum[i] += pf_sum[i - 1];
	}
	

	for(int i = 0; i < q; i++) {
		cin >> a >> b;
		cout << pf_sum[b] - pf_sum[a - 1] << '\n';
	}
	
	return 0;
}
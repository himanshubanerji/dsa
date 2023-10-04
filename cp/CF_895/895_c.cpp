// https://codeforces.com/contest/1872/problem/C

#include <bits/stdc++.h>
using namespace std;

// O(sqrt(n))
bool isPrime(int n) {
	for(int i = 2; i*i < n; i++) {
		if(n % i == 0) return false;
	}
	return true;
}

// O(sqrt(n))
int minDivisor(int n) {
	int ans = 0;
	for(int i = 2; i*i < n; i++) {
		if(n % i == 0) {
			ans = i;
			break;
		}
	}
	return ans;
}

int main() {
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int t;
	cin >> t;
	
	while(t--) {
		int l, r;
		cin >> l >> r;
		
		if(r < 4) cout << -1 << '\n';
		else if(l == r) {
			if(isPrime(l)) cout << - 1 << '\n';
			else {
				int a = minDivisor(l);
				cout << a << " " << l - a << '\n';
			}
		}
		else {
			// Consider a = 2. We can choose b 
			// such that b is even and a+b is either r or r-1,
		 	// assuming l != r (we handled the other case above)
		 	// which is where b = floor(r/2)*2 — 2 comes from.
		 	
		 	int a = 2;
		 	int b = floor(r / 2) * 2 - 2;
		 	// we use r and not l since doing floor of l
		 	// might take it to a value less than l
			
			cout << a << " " << b << '\n';
		 	
		}
		
	}
		
	
	return 0;
}
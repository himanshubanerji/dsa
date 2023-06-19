// find nth fibonacci number
#include <bits/stdc++.h>
using namespace std;

int fibo(int n) {
    if(n == 0 || n == 1) return n;
    
    return fibo(n-1) + fibo(n-2);
    
}

int main() {
    
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    cout << fibo(4);
    
    return 0;
}
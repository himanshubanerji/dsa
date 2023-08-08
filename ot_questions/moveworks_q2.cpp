// Question: 
// Find largest sum of two numbers
// which do not have any common digits

// ex: [53, 1, 36, 103, 53, 5]
// ans = 108 (103 + 5)


#include <bits/stdc++.h>
using namespace std;

bool checkDuplicate(int n1, int n2) {
    set<int> st1, st2;
    while(n1) {
        int d = n1 % 10;
        st1.insert(d);
        n1 /= 10;
    }
    
    while(n2) {
        int d = n2 % 10;
        st2.insert(d);
        n2 /= 10;
    }
    
    for(auto &it: st1) {
        if(st2.find(it) != st2.end()) return true;
    }
    return false;
    
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int n;
    cin >> n;
    
    vector<int> v(n);
    
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int sum = -1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(!checkDuplicate(v[i], v[j])) {
                sum = max(sum, v[i] + v[j]);
            }
        }
    }
    
    cout << sum << '\n';
    
    
    return 0;
}
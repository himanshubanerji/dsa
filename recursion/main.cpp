// resursion practice

#include <bits/stdc++.h>
using namespace std;

void swap(vector<int> &v, int f, int l) {
    // v[f] = v[f] ^ v[l];
    // v[l] = v[f] ^ v[l];
    // v[f] = v[f] ^ v[l];
    int temp = v[f];
    v[f] = v[l];
    v[l] = temp;
}

void reverse_array(vector<int> &v,int i) {
    int n = v.size() - 1;
    
    if(i >= n-i) return;
    
    swap(v,i,n-i);
    reverse_array(v,i+1);
    
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    vector<int> v = {1,2,3,4,5};
    reverse_array(v,0);
    
    for(auto &it: v) {
        cout << it << " ";
    }
    
    return 0;
}
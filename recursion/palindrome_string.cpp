// check if string is palindrome or not

#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, bool check) {
	static int i;
	int len = str.length();
	if(str[i] != str[len-1-i]) check = false;
	if(!check) return false;
	if(i >= len/2) return true;
	
	i++;
	return checkPalindrome(str, check);
}

bool checkPalindromeFuntional(string str) {
	static int i;
	int len = str.size() - 1;
	
	if(str[i] != str[len-i]) return false;
	if(i >= len) return true;
	
	i++;
	return checkPalindromeFuntional(str);
	
}


int main() {
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	string str;
	cin >> str;
	
	cout << checkPalindrome(str, true) << '\n';
	cout << checkPalindromeFuntional(str) << '\n';
	
	return 0;
}
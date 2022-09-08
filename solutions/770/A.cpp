#include<bits/stdc++.h>

using namespace std;


int main() {
	int n, k;
	cin >> n >> k;

	string s = "abcdefghijklmnopqrstuvwxyz";

	string newPassword = "";

	for (int i = 0; i < n; i++) {
		newPassword += s[i % k];
	}

	cout << newPassword << endl;
}
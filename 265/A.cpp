#include<bits/stdc++.h>

using namespace std;


int main() {
	
	string s1, s2;
	cin >> s1 >> s2;

	int pointer = 0;

	for (int i = 0; i < s2.length(); i++) {
		if (s2[i] == s1[pointer]) {
			pointer++;
		}
	}

	pointer += 1;

	cout << pointer << endl;


}
#include<bits/stdc++.h>

using namespace std;


int main() {

	int k, r;
	cin >> k >> r;
	int shovels = 1;

	while (true) {
		if ((shovels * k) % 10 == r || (shovels * k) % 10 == 0) {
			cout << shovels << endl;
			return 0;
		}
		else {
			shovels++;
		}
	}

	cout << shovels << endl;
}
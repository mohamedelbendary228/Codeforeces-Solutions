#include<bits/stdc++.h>

using namespace std;


int main() {

	int y, w;
	cin >> y >> w;

	int m = max(y, w);

	int numerator = abs(m - 6) + 1;


	if (numerator == 1) {
		cout << numerator << "/" << 6 << endl;
	}
	else if (numerator == 2) {
		cout << 1 << "/" << 3 << endl;
	}
	else if (numerator == 3) {
		cout << 1 << "/" << 2 << endl;
	}
	else if (numerator == 4) {
		cout << 2 << "/" << 3 << endl;
	}
	else if (numerator == 5) {
		cout << 5 << "/" << 6 << endl;
	}
	else if (numerator == 6) {
		cout << 1 << "/" << 1 << endl;
	}
	else {
		cout << 0 << "/" << 1 << endl;
	}

}
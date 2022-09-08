#include<bits/stdc++.h>

using namespace std;


int main() {

	__int64 n, x;

	cin >> n >> x;
	int distressKids = 0;

	char c;
	int d;

	for (int i = 0; i < n; i++) {
		
		cin >> c >> d;

		if (c == '+') {
			x += d;

		} else if (d <= x) {
			x -= d;
		} else {
			distressKids++;
		}
	}

	cout << x << " " << distressKids << endl;
}
#include<bits/stdc++.h>

using namespace std;


int main() {

	int n, b, d;
	cin >> n >> b >> d;

	int count = 0;
	
	int totalSize = 0;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;

		if (a <= b) {
			totalSize += a;
		}

		if (totalSize > d) {
			count++;
			totalSize = 0;
		}
	}

	cout << count << endl;
}
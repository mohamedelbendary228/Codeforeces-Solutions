
#include <bits/stdc++.h>

using namespace std;

int main() {
	//1 5 3 2  13 = 1 + 1 + 5 + 5 + 1
    //11221      


	int calories[4];

	int sum = 0;

	for (int i = 0; i < 4; i++) {
		cin >> calories[i];
	}
	string s;
	cin >> s;


		for (int i = 0; i < s.length(); i++) {
			int value = s[i] - '0';
			for (int j = 0; j < 4; j++) {
				if (value == j + 1) {
					sum += calories[j];//cout << "S " << i << " " << value << " = " << calories[j] << endl;
				}
			}
		}


	cout << sum << endl;
	
}
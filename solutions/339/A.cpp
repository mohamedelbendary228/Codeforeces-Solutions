#include<bits/stdc++.h>

using namespace std;


int main() {

	string s;
	cin >> s;
	vector<int> arr;

	for (int i = 0; i < s.length(); i++) {
		if (i % 2 == 0) {
			int num = s[i] - '0';
			arr.push_back(num);
		}
	}

	sort(arr.begin(), arr.end());


	for (int i = 0; i < arr.size() ; i++) {
		string op = (i < arr.size() - 1) ? "+" : " ";
		cout << arr[i] << op;
	}
}
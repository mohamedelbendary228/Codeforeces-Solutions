#include<bits/stdc++.h>

using namespace std;


int main() {

	string set;
	getline(cin, set);

	vector<int> chars;

	int distinctLetter = 0;

	for (int i = 0; i < set.length(); i++) {
		if (set[i] >= 97 && set[i] <= 122) {
			chars.push_back(set[i]);
		}
	}

	vector<int> fr(123);


	for (int i = 0; i < chars.size(); i++) {
		int key = chars[i];
		fr[key]++;
	}

	for (int i = 0; i < 123; i++) {
		if (fr[i] > 0) {
			distinctLetter++;
		}
	}

	cout << distinctLetter << endl;
	
}
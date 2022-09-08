
#include <bits/stdc++.h>

using namespace std;

int main() {    
	//8   1               
	//1 -1 1 -1 -1 1 1 1  

	//11  8
	//-1 -1 2 -1 -1 -1 -1 -1 -1 -1 -1 

	int n;
	cin >> n;

	vector<int> arr(n);

	int untreatedCrimes = 0;
	int police = 0;

	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		if (input > 0) {
			police += input;
		}
		else {
			if (police < 1) {
				++untreatedCrimes;
			}
			else {
				--police;
			}
		}
	}



	cout << untreatedCrimes << endl;

	
}
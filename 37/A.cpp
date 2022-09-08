#include<bits/stdc++.h>

using namespace std;

int const AKA = 5e5+5;

vector<int> freq(AKA);

int main() {

	int n;
	cin >> n;

	vector<int> arr(n);

	int sum = 0;
	int max = 1;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		int key = arr[i];
		freq[key]++;
	}

	for (int i = 0; i <= 1000; i++) {
		if (freq[i] != 0) {
			sum++;
		}

	    if(freq[i] > max) {
			max = freq[i];
		}
	}

	cout << max << " " << sum << endl;

	/*
	int n, m;
	cin >> n >> m;

	vector<int> arr(n);
	vector<int> freqArr(m + 1);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		int x = arr[i];
		freqArr[x]++;
	}
	 
	for (int i = 1; i <= m; i++) {
		cout << freqArr[i] << endl;
	}
	
	*/
  

}
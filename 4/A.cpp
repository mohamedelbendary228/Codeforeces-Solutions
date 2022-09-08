#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>

using namespace std;

int main() {
	short w;
	cin >> w;

	if ((w % 2 == 0) && w > 2) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}


	return 0;
}
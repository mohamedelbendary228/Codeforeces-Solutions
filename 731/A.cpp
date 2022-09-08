#include <iostream>
using namespace std;

int main() {

	string name;
	cin >> name;
	int rotations = 0;  
	int initalPointer = 0;
	
	for (int i = 0; i < name.length(); i++) {
		int index = name[i] - 97;
		int moves = abs(initalPointer - index); 
		if (moves < 13) {
			rotations += moves;
		}
		else {
			rotations += 26 - moves;
		}

		initalPointer = index;

	}

	cout << rotations << endl;
	
}
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	
	int found1 = s.find("0000000");
	int found2 = s.find("1111111");
	
	if((found1 != -1) || (found2 != -1)){
		cout<<"YES";
	}else{
		cout<<"NO";
	}	
	return 0;
}
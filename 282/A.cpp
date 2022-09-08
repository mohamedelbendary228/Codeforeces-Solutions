#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    
    int n, num=0;
	cin>>n;
	string x;
	for(int i=0; i<n; ++i){
		cin>>x;
		if(x[1]=='+'){
			++num;
		}else if(x[1]=='-'){
			--num;
		}
	}
		cout<<num<<endl;
    return 0;
}
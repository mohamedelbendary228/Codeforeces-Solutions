#include <iostream>
#include <stdio.h> 
#include <string>

using namespace std;

int main(){
	int numLower = 0;
	int numUpper = 0;
	string str;
	cin>>str;
	for(int i=0; i<str.length(); i++){
		if(str[i] < 97){
			++numUpper;
		}else{
			++numLower;
		}
		
	}
	for(int i=0; i<str.length(); i++){
		if(numUpper > numLower){
		    str[i] = toupper(str[i]);
	    }else if((numLower > numUpper) || (numLower == numUpper)){
	    	
		    str[i] = tolower(str[i]);
	    }  

	}
	
	cout<<str<<endl;
	return 0;
}
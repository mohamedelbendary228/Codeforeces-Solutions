#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
	string s, s2="hello";
	cin>>s;
	int j =0;
	 int len = 0;
	
 	for(int i=0; i<s.length(); ++i){
 		if(s[i]==s2[j]){
 			j++;
 			len++;
		 }
	 }
	 if(len == 5){
	 	cout<<"YES";
	 }else{
	 	cout<<"NO";
	 }
	
	return 0;
}
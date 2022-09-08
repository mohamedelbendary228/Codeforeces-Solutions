#include <iostream>
#include <stdio.h> 

using namespace std;
int main(){
		int a , b;
		int year = 0;
		scanf("%d%d", &a, &b);
		while(a<=b){
			a*=3;
			b*=2;
			++year;
		}
		printf("%d", year);
}
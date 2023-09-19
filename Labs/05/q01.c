/*
* Programmer:Muhammad Ali 23K-0052
* Date: 19/09/23
* Descrption:To check for multiple of 3
		
*/
#include <stdio.h>
int main(){
	int n;
	printf("enter any number=");
	scanf("%d",&n);
	if(n%3==0){//simply checking remainder by using mod
		printf("number is multiple of 3");
	}
	else{
		printf("number is not a multiple of 3");
	}
		
		

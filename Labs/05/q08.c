#include <stdio.h>
/*
* Programmer:Muhammad Ali 23K-0052
* Date: 20/09/23
* Descrption:checks for light level and prints respective output
		
*/

int main(){
	int x;
	printf("enter the light level=");
	scanf("%d", &x);
	
	if(x>500){//checking specified ranges to print the required output
		printf("sunshine");
	}
	else if(x>=0 && x<=100){
		printf("evening");
	}
	else if(x>100 && x<=500){
		printf("lighting");
	}
}

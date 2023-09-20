/*
* Programmer:Muhammad Ali 23K-0052
* Date: 20/09/23
* Descrption:swaps the first 4 bits with the last 4 bits in a binary number 
		
*/

#include <stdio.h>

int main(){
	int n, x, y;
	printf("input number=");
	scanf("%d", &n);
	x=n/10000;//this gives us the first 4 numbers
	y=((n%10000)*10000);//this gives us the last 4 numbers
	printf("%d", x+y);
	
}

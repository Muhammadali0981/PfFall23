/* Programmer:Muhammad Ali 23K-0052
* Date: 24/10/23
* Descrption:swaps two integer value using a function
*/

#include <stdio.h>

void SwapInteger(int a, int b){
	int swap=0;
	swap=a;
	a=b;
	b=swap;
	printf("value of a is %d value of b is %d", a, b);	
}//end SwapInteger

int main(){
	int a,b;
	printf("input value of a:");
	scanf("%d", &a);
	printf("input value of b:");
	scanf("%d", &b);
	SwapInteger(a,b);
	
}//end main

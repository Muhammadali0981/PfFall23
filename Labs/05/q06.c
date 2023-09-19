#include <stdio.h>

/*
* Programmer:Muhammad Ali 23K-0052
* Date: 19/09/23
* Descrption:checks if 7th and 4th bit is on and turns them off
		
*/
int main(){
	int n;
	printf("please enter a 8 bit binary number \n");
	scanf("%d", &n);
	if ((((n/1000000)%10)>0) && (((n/1000)%10)>0)){// using mod and dvision to checck for the bit on and off
		n = n - 1000000 - 1000;
	}//end if
	else{
		n=n;
	}//end else
	printf("%08d", n);
}

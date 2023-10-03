/*
* Programmer:Muhammad Ali 23K-0052
* Date: 03/10/23
* Descrption:LCM and GCD of 2 numbers
*/

#include <stdio.h>
int main(){
	int a, b,n, gcd=0,lcm;
	printf("input 1st number:");
	scanf("%d", &a);
	printf("input secodn number:");
	scanf("%d", &b);
	if(a>b){
		n=a;
	}
	else {
		n=b;
	}
	int i=1;
	while(i<n){
		if(a%i==0 && b%i==0){
			gcd=i;
		}
		i++;
	}
	printf("gcd=%d", gcd);
	lcm=(a*b)/gcd;
	printf("\nlcm=%d",lcm);

}

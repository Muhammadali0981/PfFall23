/*
* Programmer:Muhammad Ali 23K-0052
* Date: 12/09/23
* Descrption:inputs a number n and prints stars in this format 
		if n is 3 output will be
		***
		***
		***
*/

# include <stdio.h>
int main(){
	int n, i, ls; //number is n ls is line switch counter and i is star counter
	n=0;
	i=0;
	ls=0;
	printf("please enter a number=");
	scanf("%d", &n);
	while (ls<n){//loop for lines
		i=n;
		
	        while (i>0){
		printf("*");
		i=i-1; //decriminting value of i
		}
	printf("\n"); //line change
	ls=ls+1;	
	}
}
		
		

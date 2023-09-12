/*
* Programmer:Muhammad Ali 
* Date: 12/09/23
* Descrption:inputs a number n and prints stars in this format 
		if n is 3 output will be
		***
		***
		***
*/

# include <stdio.h>
int main(){
	int n, i, ls;
	n=0;
	i=0;
	ls=0;
	printf("please enter a number=");
	scanf("%d", &n);
	while (ls<n){
		i=n;
		
	        while (i>0){
		printf("*");
		i=i-1;
		}
	printf("\n");
	ls=ls+1;	
	}

		
		

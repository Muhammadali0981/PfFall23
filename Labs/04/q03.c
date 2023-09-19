/*
* Programmer:Muhammad Ali 23K-0052
* Date: 12/09/23
* Descrption:inputs a number n and prints the sum of their squares 
		
*/
#include <stdio.h>

int main(){
	int n, num, total; //n is the number of inputs whike num is the number being inputed total is the final output
	total=0;
	printf ("enter the amount of numbers you want to input=");
	scanf ("%d",&n);
	while (n>0){ //loop to take n inputs
		num=0;
		printf("enter number=");
		scanf("%d",&num);
		total=total+(num*num); //squaring and adding
		n=n-1; //decrementing
	}
	printf("%d",total);
}

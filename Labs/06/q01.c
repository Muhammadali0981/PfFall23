/*
* Programmer:Muhammad Ali 23K-0052
* Date: 03/10/23
* Descrption:Checks for prefect number
		
*/
#include <stdio.h>

int main(){
	int n,i, total=0;
	printf("please input a number:\n");
	scanf("%d", &n);
	i=1;
	while (i<n){
		if(n%i==0){
			total += i;
		}
		i++;
	
	}
	if(total==n){
		printf("number is perfect");
	}
	else{
		printf("number is not prefect");
	}
	
}

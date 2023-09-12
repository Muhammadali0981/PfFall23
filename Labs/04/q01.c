/*
* Programmer:Muhammad Ali 
* Date: 12/09/23
* Descrption:inputs a number n and prints stars in this format 
		if n is 3 output will be
		*
		**
		***/

# include <stdio.h>
int main(){
	int n, i, j;
	n=0;
	i=0;
	j=0;
	printf("please enter a number=");
	scanf("%d", &n);
	while (i<n){
		i=i+1;
		j=0;
		while (j<i){
		        
			printf("*");
			j=j+1;
		}
		printf("\n");
		
	}

		

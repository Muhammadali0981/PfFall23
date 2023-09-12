#include <stdio.h>

int main(){
	int n, num, total;
	total=0;
	printf ("enter the amount of numbers you want to input=");
	scanf ("%d",&n);
	while (n>0){
		num=0;
		printf("enter number=");
		scanf("%d",&num);
		total=total+(num*num);
		n=n-1;
	}
	printf("%d",total);
}

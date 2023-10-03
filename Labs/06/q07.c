/* Programmer:Muhammad Ali 23K-0052
* Date: 03/10/23
* Descrption:number pattern printing
*/
#include <stdio.h>
int main(){
	int a[100];
	int s=0,n;
	printf("please input size of array=");
	scanf("%d", &n);
//validating array lenght 
	if(n<=0 || n>101){
		printf("please in put a valid input");
	}
	else{
//inputting values and summing them 
		while (n>0){
			printf("input value ");
			scanf("%d", &a[n]);
			s+=a[n];
			n--;
	    }
	    printf("%d", s);
	}

}

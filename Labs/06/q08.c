/* Programmer:Muhammad Ali 23K-0052
* Date: 03/10/23
* Descrption:prints elements of an array in reverse 
*/
#include <stdio.h>
int main(){
	int s[100];
	int n,i;
	printf("please input size of array:\n");
	scanf("%d", &n);
	//validating lenght
	if(n<=0 && n>100){
		printf("enter valid lenght");
	}
	//inputting values
	else{
		i=0;
		while (i<n){
			printf("enter value %d:", i+1);
			scanf("%d", &s[i]);
			i++;
		}//end while
		//reversing 
		while (n>0){
			printf("%d ", s[n-1]);
			n--;
		}//end while
	}
}

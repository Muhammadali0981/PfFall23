/* Programmer:Muhammad Ali 23K-0052
* Date: 10/10/23
* Descrption:rotating elements of an array
*/

#include<stdio.h>

int main(){
	int arr[1000], n, i, k;
	printf("please enter number of elements=");
	scanf("%d", &n );
	
	i=0;
	while (i<n){
		printf("enter element %d=" ,i+1);
		scanf("%d", &arr[i]);
		i++;
	}
	printf("enter shifter=");
	scanf("%d", &k);
	i=0;
	while (i+k<n){
		printf("%d", arr[i+k]);
		
		i++;
	}
	i=0;
	while (i<k){
		printf("%d", arr[i]);
		i++;
	}
return 0;
}

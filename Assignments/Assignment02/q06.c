/* Programmer:Muhammad Ali 23K-0052
* Date: 29/10/23
* Descrption:finds pairs of number that add up to given sum in an array
*/

#include <stdio.h>

int main(){
	int arr[1000],i,j,n, count, t;
	count=0;
	printf("input size of array:");
	scanf("%d",&n);
	
	for (i = 0; i < n; i++ ){
		printf("enter element number %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("enter t:");
	scanf("%d",&t);
	for(i=0; i<n; i++){
		for(j=i; j<n; j++){
			if(arr[i] + arr[j]==t){
				printf ("(%d, %d)", arr[i], arr[j]);
			}	
		}
	}
}

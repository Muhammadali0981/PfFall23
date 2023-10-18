/* Programmer:Muhammad Ali 23K-0052
* Date: 18/10/23
* Descrption:sorts an array in ascending order
*/

#include<stdio.h>

int main(){
	int i,j,n;
	int a[1000];
	
	printf("enter number of elements you want to enter=");
	scanf ("%d", &n);
	
	//inputing values in array
	for (i=0;i<n;i++){
		printf("enter element number %d:", i+1);
		scanf("%d", &a[i]);
	}//end for
	
	//sorting loop
	for(i=1; i<n; i++){
		for(j=i; a[j-1]>a[j] && j>0; j--){
			int temp = a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
		}
	}
	//printing output
	for (i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}

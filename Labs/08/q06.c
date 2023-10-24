/* Programmer:Muhammad Ali 23K-0052
* Date: 24/10/23
* Descrption:processes than array
*/

#include <stdio.h>
#include <string.h>

void processArray(int a[],int n){
	int i;
	int sum=0;
	int max=-100000;
	int min=100000;
	for (i=0;i<n;i++){
		sum += a[i];
		if(a[i]<min){
			min=a[i];
		}
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("Array Sum:%d\nMaximum Value:%d\nMinimun Value:%d\n", sum, max, min);
}
int main(){
	int n, a[1000];
	
	printf("enter number of elements:");
	scanf("%d", &n);
	for (int i=0;i<n;i++){
		printf("enter %d element:", i+1);
		scanf("%d", &a[i]);
		
	}
	processArray(a,n);
	
}

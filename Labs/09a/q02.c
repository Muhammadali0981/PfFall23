/* Programmer:Muhammad Ali 23K-0052
* Date: 31/10/23
* Descrption:reversing array using 
*/

#include <stdio.h>

void reverse(int *ar, int size){
	int temp;
	int i;
	//reveresing array 
	for(i=0;i<size/2;i++){
		temp = *(ar+i);
		*(ar+i)=*(ar+size-1-i);
		*(ar+size-1-i)=temp;	
	}

}

int main() {
	int a[10];
	int i ;
	for (i = 0;i<10;i++) {
		printf("Enter element %d:", i+1);
		scanf("%d",&a[i]);
	}
	reverse(a, 10);
	i=0 ;
	printf("revresed output is:\n");
	for (i = 0;i<10;i++) {
		printf("%d ",a[i]);
	}
	return 0;
} // end main

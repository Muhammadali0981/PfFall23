/* Programmer:Muhammad Ali 23K-0052
* Date: 31/10/23
* Descrption:prints 3 different arrays with their memory locations
*/
#include <stdio.h>

int main() {
	int integer[100];
	long long int long_int[100];
	char ch[100];
	int n = 0;
	printf("enter size of arrays ");
	scanf("%d",&n);
	int i ;
	for (i = 0;i<n;i++) {
		printf("Enter %d element of int array ", i+1);
		scanf("%d",&integer[i]);
	}
	for (i=0; i < n; i++){
		printf("Enter %d element of long long int array ", i+1);
		scanf("%lld",&long_int[i]);	
	}
	for (i=0; i < n; i++){
		printf("Enter %d element of charater array ", i+1);
		scanf(" %c",&ch[i]);	
	}

	for (i=0;i<n;i++) {
		
		printf("%d\t%p   ",*(integer+i),(integer+i)); 
		
		printf("%lld\t%p   ",*(long_int+i),long_int+i); 
		
		printf("%c\t%p   \n",*(ch+i),(ch+i)); 
	}
	return 0;
}  //end main

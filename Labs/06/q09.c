/* Programmer:Muhammad Ali 23K-0052
* Date: 05/10/23
* Descrption:prints min max value of an array 
*/
#include <stdio.h>
int main(){
	int s[100];
	int n,i,g=-10000000,m=10000000;
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
			if (s[i]>g){
			    g=s[i];
			}
			if (s[i]<m){
			    m=s[i];
			}
			i++;
		}//end while
       printf("minimum value=%d",m);
       printf("\nmaximum value=%d", g);
	    
	}
}

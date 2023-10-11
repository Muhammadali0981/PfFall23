/* Programmer:Muhammad Ali 23K-0052
* Date: 11/10/23
* Descrption:tells frequency of nummbers in an array
*/
#include <stdio.h>
int main(){
	int a[100], f[100]={0};
	int n, i, t, j;
	
	printf("enter number of elements you want to input:");
	scanf("%d", &n);
	
	for (i=0;i<n;i++){
		printf("enter element number %d:", i+1);
		scanf("%d", &a[i]);
		t=a[i];//checks frequency 
		if(a[i]==t){
			f[t]++;
		}//end if
	}//end for
	
	for (i=0;i<n;i++) {
		t=a[i];
        if (f[t]>0) {
            printf("frequency of %d is %d:\n", a[i], f[t]);
            f[t]=0; //ensures frequencey is not printed more than once
        }// end if
    }// end for
    
return 0;
}

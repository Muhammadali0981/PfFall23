/*
* Programmer:Muhammad Ali 23K-0052
* Date: 03/10/23
* Descrption:prints fibbonaci til 10000 and sums all the factors of 3, 5 or 7
*/

#include <stdio.h>
int main(){
	int i,j, k, t=0;
	i= 1;
	j= 0;
	k = 0;
	for(int n=0; k < 10000; n++){
			printf("%d ", k);
			k=j+i;
			i = j;
		    j = k;
		    if(k%3==0  || k%5==0 || k%7==0){
		    	t+=k;
			}
			
	}
	printf("\n%d", t);		
}
	

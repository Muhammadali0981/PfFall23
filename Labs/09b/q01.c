/* Programmer:Muhammad Ali 23K-0052
* Date: 31/10/23
* Descrption:factorial using function
*/

#include<stdio.h>

int fact(int n, int ans){
	if(n>0)
		return(fact(n-1, ans*n));//recursion 
	return ans;
}//end fact

int main(){
	int y=1;
	int a;
	printf("please enter the number:");
	scanf("%d", &a);
	printf("%d", fact(a,y));
	
}

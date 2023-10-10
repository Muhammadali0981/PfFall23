/* Programmer:Muhammad Ali 23K-0052
* Date: 10/10/23
* Descrption:adds each digit of an number
*/

#include <stdio.h>
int main(){
	int mod, num, sum;
	sum=0;
	printf("input number=");
	scanf("%d", &num);
	if (num==0){
		sum=0;
	}
	while (num>0){
		mod=num%10;
		sum+=mod;
		num = num/10;
	}//end while
	printf("%d", sum);
return 0;
}

/* Programmer:Muhammad Ali 23K-0052
* Date: 10/10/23
* Descrption:division without divide sign
*/
#include<stdio.h>
int main(){
	int a,b,c;
	printf("use this format for input a/b mae sure to write / in between");
	printf("\nenter a/b=");
	scanf("%d/%d",&a,&b );
	while (a>0){//conunting the number of times b can be subracted from a
		if(a<b){
			break;
		}
		a-=b;
		c++;
	}
	printf("Answer is %d", c);
return 0;
}

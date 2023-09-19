/*
* Programmer:Muhammad Ali 23K-0052
* Date: 19/09/23
* Descrption:basic calculator
		
*/
#include <stdio.h>
int main(){
	int a,b;
	char k ;//using switch case
	printf("enter a number=");
	scanf("%d", &a);

	printf("enter second number=");
	scanf("%d", &b);

	printf("choose opereation=");
	scanf( " %c", &k);

	switch(k){
	case'+':
	printf("%d", a+b);
	break;
	case'-':
	printf("%d", a-b);
	break;
	case'*':
	printf("%d", a*b);
	break;
	case '/':
	printf("%d", a/b);
	break;


	}
	
		
}

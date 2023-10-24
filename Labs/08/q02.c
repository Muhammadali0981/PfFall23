/* Programmer:Muhammad Ali 23K-0052
* Date: 24/10/23
* Descrption:calculator using a functions
*/

#include <stdio.h>

int Calculator(int a, int b, char opr){
	switch(opr) {
		
		case '+':
		return a+b;
		break;
		
		case '-':
		return a-b;
		break;
		
		case '/':
		return a/b;
		break;
		
		case '*':
		return a*b;
		break;	
	}	
}//end calculator

main (){
	int v1,v2; 
	char x;
	printf("enter first value:");
	scanf("%d", &v1);
	printf("enter second value:");
	scanf("%d", &v2);
	printf("enter operation:");
	scanf(" %c", &x);
	printf ("%d",Calculator(v1, v2, x));
}

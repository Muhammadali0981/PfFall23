/*
* Programmer:Muhammad Ali 23K-0052
* Date: 12/09/23
* Descrption:sloves the quadratic equation using the qaudartic equations shows when solutions are not real  
		
*/
#include <stdio.h>
#include <math.h>
int main(){
	int a, b, c;
	float x1, x2, d; //floats as the values can be decimal
	printf("kindly follow this pattern while inputting\nax^2+bx+c a b and c are to be taken as inputs \n");
	printf("enter a="); //taking iputs
	scanf("%d", &a);
	printf("enter b=");
	scanf("%d", &b);
	printf("enter c=");
	scanf("%d", &c);
	d=(b*b)-4*(a)*(c);//discriminant calculation
	if (d<0){//considering all mathematical possibilitiles 
		printf("no real solutions");
	}else if (d>0){
		printf("two solutions exist ");
		x1=(((-b)+(float)sqrt(d))/(2*a));//applying the actual formula once for positive once for negative 
		x2=(((-b)-(float)sqrt(d))/(2*a));
		printf("x1=%f",x1);
		printf(", x2=%f",x2);
	}else if (d==0){
		printf("only one solution exists ");
		x1=(-b/2*a);
		printf("x1=%f",x1);
	}

}

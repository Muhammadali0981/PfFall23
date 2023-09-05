#include <stdio.h>

main() {
	int a, b, c;
	a=0;
	b=0;
	c=0;
	printf("this is a program to calculate volume....please enter the three sides a,b and c \n");
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	printf("c=");
	scanf("%d", &c);
	printf("volume is= %d", a*b*c);
	
}// end main()

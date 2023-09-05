#include <stdio.h>
#include <math.h>

main() {
	int opp, adj;
	opp=0;
	adj=0;
	printf("this is a program to calculate hypothenous...please enter the two sides adj,opp \n");
	printf("adj=");
	scanf("%d", &adj);
	printf("opp=");
	scanf("%d", &opp);
	printf("hypothenous is= %f", sqrt((opp*opp)+(adj*adj)));
	
}// end main()

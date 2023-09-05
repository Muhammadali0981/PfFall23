#include <stdio.h>
#include <math.h>

main() {
	int price, discount;
	float discountValue;
	price=0;
	discount=0;
	discountValue=0;
	printf("this is a program to calculate sale price given the distcount and original...please enter the distcount and original\n");
	printf("price=");
	scanf("%d", &price);
	printf("discount=");
	scanf("%d", &discount);
	discountValue= price*(1 - ((float)discount/100));
	printf("sale price is= %f",  discountValue);
	
}// end main()

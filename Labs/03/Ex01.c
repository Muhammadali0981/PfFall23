#include <stdio.h>
#include <math.h>

main() {
	int x, y;
	char D;
	x=0;
	y=0;

	printf("this is a calulator....please enter the two numbers x and y \n");
	printf("x=");
	scanf("%d", &x);
	printf("y=");
	scanf("%d", &y);
	printf("Please select symbol a for addition s subraction d for division m for multiplication \n");
	scanf(" %c", &D);
	 if (D == 'a') { 
        printf("%d\n", x + y);
    } else if (D == 's') {
        printf("%d\n", x - y);
    } else if (D == 'm') { 
        printf("%d\n", x * y);
    } else if (D == 'd') {
	printf("%f\n", x/y );
	}
    	

}


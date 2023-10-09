/*
* Programmer:Muhammad Ali 23K-0052
* Date: 09/10/23
* description: matchstick game
*/
#include <stdio.h>

int main() {
	int sticks = 21, c;
	printf("Sticks %d\n", sticks);

	while (sticks > 0) {
		
		do {
			printf("Enter number of sticks 1, 2, 3 or 4: ");
			scanf("%d", &c);
		} while (c > 4 || c < 1);
		sticks -= c;

		if (sticks > 1) {
			switch (c) {//by using this logic the computer always wins 
				case 4:
				printf("computer picked 1 stick\n");
				sticks -= 1;
				break;
				
				case 3:
				printf("computer picked 2 sticks\n");
				sticks -= 2;
				break;
				
				case 2:
				printf("computer picked 3 sticks\n");
				sticks -= 3;
				break;
				
				case 1:
				printf("computer picked 4 sticks\n");
				sticks -= 4;
				break;
			}
		}
		

		if (sticks >= 0) 
			printf("Sticks left %d\n", sticks);
		else 
			printf("Sticks left 0");
	}

	return 0;
}

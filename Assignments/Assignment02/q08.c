
#include <stdio.h>


int persistence(int num) 
{
	int count = 0;

	// checking if number is not 1 digit
	while (num > 9) {
		int ans = 1;

		while(num > 0) {
			ans *= num % 10;
            num /= 10;
		}
		num = ans;
		count++;
	}

	return count;
} 

int main()
{
	char num[10];
	while (1) {
    
		printf("\nEnter number(enter enter to stop): ");
		gets(num);
		if (!strlen(num)) break; 
        printf("Persistence of %s is %d\n", num, persistence (atoi(num)));
	}
	return 0;
} 

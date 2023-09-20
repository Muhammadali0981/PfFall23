#include <stdio.h>

int main(){
	int n, x, y;
	printf("input number=");
	scanf("%d", &n);
	x=n/10000;
	y=((n%10000)*10000);
	printf("%d", x+y);
	
}

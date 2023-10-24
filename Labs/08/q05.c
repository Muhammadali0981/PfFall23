/* Programmer:Muhammad Ali 23K-0052
* Date: 24/10/23
* Descrption:checks usage of cars according to day of weeek
*/

#include <stdio.h>
#include <string.h>

bool decideCarUsage(int a, int b){
	return !(a%2 ^ b%2);
}//end decideCarUsage

int main(){
	int car, day;
	printf("input car number:");
	scanf("%d", &car);
	printf("input day number:");
	scanf("%d", &day);
	printf("%d", decideCarUsage(car, day));
}//end main

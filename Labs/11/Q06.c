/* Programmer:Muhammad Ali 23K-0052
* Date: 22/11/23
* Descrption:incerementing current date by 45 days using structs
*/

#include <stdio.h>


typedef struct date{
	
	int day;
	int month;
	int year;
}date;

int ChecksMonth(int month){

	int x;

	if (month==4 || month==6 || month==9 || month==11) x=30;
	else if (month==2) x=28;
	else x=31;

return x;
}

int main(){
	
	date Date;
	int limit;

	printf("enter Date:");
	scanf("%d %d %d",&Date.day,&Date.month,&Date.year);

	limit=ChecksMonth(Date.month);

	Date.day += 45-limit;
	Date.month += 1;

	limit=ChecksMonth(Date.month);

	if(Date.day > limit){
		Date.month += 1;
		Date.day -= limit;
	} 


	if(Date.month > 12) Date.year += 1;

	printf("New Date Is:%d-%d-%d", Date.day, Date.month, Date.year);



	return 0;
}

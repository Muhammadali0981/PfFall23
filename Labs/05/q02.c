/*
* Programmer:Muhammad Ali 23K-0052
* Date: 19/09/23
* Descrption:To check for time value and give prompt accordingly
		
*/
#include <stdio.h>
int main(){
	int time;
	printf("enter current time=");
	scanf("%d",&time);
	if((time>=5) && (time<=11)){
		printf("Good Morning");
	}
	else if((time>=12) && (time<=18)){
		printf("Good Evening");
	}
	else if((time>=18) && (time<=24)){
		printf("Good Night");
	}
		
}	

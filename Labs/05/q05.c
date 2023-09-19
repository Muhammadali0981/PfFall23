#include <stdio.h>

/*
* Programmer:Muhammad Ali 23K-0052
* Date: 19/09/23
* Descrption:check the type of the charater inputed on the keyboard 
		
*/

int main(){
	char x;//taking input 
	int y;//for conversion into ASCII
	printf("press a key=");
	scanf("%c", &x);
	y= (int)x;
	if ((y>=48) && (y<=57)){
		printf("a digit was pressed");
		}// end if
	else if((y>=65) && (y<=90)){
		printf("a captial letter was pressed");
	}// end else if
	else if((y>=61) && (y<=122)){
		printf("a lower case alphabet was pressed");
	}// end else if
	else{
		printf("a special character was pressed");
	}// end else

	
}

/*
* Programmer:Muhammad Ali 23K-0052
* Date: 19/09/23
* Descrption:To print delete of not deletd message
		
*/
#include <stdio.h>
int main(){
	char k;//using switch case
	printf("press key=");
	scanf("%c", &k);
	switch(k){
	case 'Y':
	printf("Deleted successfully");
	break;
	case 'y':
	printf("Deleted successfully");
	break;
	case 'N':
	printf("Delete cancelled");
	break;
	case 'n':
	printf("Deleted successfully");
	break;


	}
	
		
}

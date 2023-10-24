/* Programmer:Muhammad Ali 23K-0052
* Date: 24/10/23
* Descrption:login authentication with given password
*/

#include <stdio.h>
#include <string.h>

bool login(char *a){
	if (strlen(a)>=8 && strcmp("Secure123",a)==0){
		return true;	
	}
	return false;

	
}

int main(){
	char a[100];
	printf("please enter your password:");
	scanf("%s",a);
	if (login(a)==1){
		printf("Login succesful. Welcome!");
	}
	else{	
		printf("Login failed. incorrect password");
	}
	
	
}

/*
* Programmer:Muhammad Ali 23K-0052
* Date: 03/10/23
* Descrption:integeer interpreatation
*/
#include <stdio.h>
int main(){
	int a,b;
	printf("input 1st number:");
	scanf("%d", &a);
	printf("input secodn number:");
	scanf("%d", &b);
	while(a<=b){
		switch (a){
			case 0 :printf(" zero");break;
			case 1 :printf(" one");break;
			case 2 :printf(" two");break;
			case 3 :printf(" three");break;
			case 4 :printf(" four");break;
			case 5 :printf(" five");break;
			case 6 :printf(" six");break;
			case 7 :printf(" seven");break;
			case 8 :printf(" eight");break;
			case 9 :printf(" nine");break;
			default: if(a%2==0){
				printf(" even");
			
			}
				else{
					printf(" odd");
				}
		}a++;
			
	}
}

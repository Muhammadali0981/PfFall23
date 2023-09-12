/*
* Programmer:Muhammad Ali 
* Date: 12/09/23
* Descrption:tells who is older between two people 
		
*/
#include <stdio.h>
int main(){
	int d1,m1,y1,d2,m2,y2; //one is for person 1 and 2 is for person 2 d y and m are used for day month and year
    printf("please enter the day of birth of person 1 ");//taking the huge number of inputs
    scanf("%d",&d1);
    printf("please enter the month of birth of person 1=");
    scanf("%d",&m1);
    printf("please enter the year of birth of person 1=");
    scanf("%d",&y1);
    printf("please enter the day of birth of person 2=");
    scanf("%d",&d2);
    printf("please enter the month of birth of person 2=");
    scanf("%d",&m2);
    printf("please enter the year of birth of person 2=");
    scanf("%d",&y2);
    if(y2>y1){
    	printf("person 1 is older"); //cehcking the condition assumming peerson 1 is older and if all are false they are either same aged or person 2 is older
	}else if((y2==y1)&&(m2>m1)){
		printf("person 1 is older");
	}
	else if (((y2==y1)&&(m2==m1))&&(d2>d1)){
		printf("person 1 is older");
	}
	else if ((y2==y1)&&(m2==m1)&&(d2==d1)){
		printf("age is same");
	}
    else{
    	printf("person 2 is older");
	}
   
}

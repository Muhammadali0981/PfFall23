#include<stdio.h>
/*
* Programmer:Muhammad Ali 23K-0052
* Date: 20/09/23
* Descrption:checks for discount an dprints the new price, amount saved and actual amount
		
*/
int main(){
	int dprice, disc, total;
	disc=0;
	printf("please enter your total bill=");
	scanf("%d", &total);
	if(total>=2000 && total<=4000){//checking discount using ranges
		disc=total*0.2;
	}//end if
	else if(total>=4001 && total<=6000){
		disc=total*0.3;
	}//end elseif
	else if(total>6000){
		disc=total*0.5;
	}
	dprice=total-disc;
	printf("new price=%d\nsaved=%d\nactual amount=%d", dprice, disc, total);
	
	
}

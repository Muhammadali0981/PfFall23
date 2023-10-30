/* Programmer:Muhammad Ali 23K-0052
* Date: 29/10/23
* Descrption:calculates the stats of runs of given number of batsmen for given number of innings 
			giving following results number of centuries, high centuries, max score, average score 
*/
#include<stdio.h>

int main(){
	
	int i,j,cen,hcen,total,max,x,y,a[100][100];
	float avg;
	
	//taking inputs
	printf("please enter the number of batsmen:");
	scanf("%d", &i);
	printf("please enter the number of innings:");
	scanf("%d", &j);
	
	for (x = 0; x < i; x++){
		//intializations
		total=0;
		max=-10000000;
		cen=0;
		hcen=0;
		
		for (y = 0; y < j; y++){
			printf("enter runs of batsman number %d for innings %d:", x+1, y+1);
			scanf ("%d", &a[x][y]);
			total += a[x][y];
			
			if (a[x][y] > max){
				max = a[x][y];
			}//end if
			
			if (a[x][y] >= 50 && a[x][y] <= 99){
				hcen++;
			}//end if
			
			if(a[x][y] >= 100){
				cen++;
			}//end y loop
			
		}//end x loop
		avg = total/j;
		
		//printing output accordingly 
		printf("\nstats for batsemen number %d are:\ntotal runs:%d\naverage:%.02f\nhighest score:%d\ncenturies:%d\nhalf centuries:%d\n",x+1, total,avg,max,cen,hcen, "\n");                      		
	}	
}

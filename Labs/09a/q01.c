/* Programmer:Muhammad Ali 23K-0052
* Date: 31/10/23
* Descrption:swaping two variables using array
*/

#include<stdio.h>

void swap(int *a, int *b){
	*a = *b;
	int tmp = *a;
	*b = tmp;
	
}

int main(){
	int j = 2, k = 5;
	printf("j=%d, k=%d\n", j,k);
	swap(&j,&k);
	printf("j=%d, k=%d\n", j,k);
	return 0;
}

//the desired values were not printed in the given code beacuse pointers were needed to make changes at the specfic location 

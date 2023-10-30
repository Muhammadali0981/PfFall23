/* Programmer:Muhammad Ali 23K-0052
* Date: 29/10/23
* Descrption:finds ramanujan numbers
*/

#include <stdio.h>

void ramanujan_finder(int num) {
	int arr[1000] = {0};
	int i,j,k,l,x=0;
	for (i = 0; i < num*num*num; i++) {
		for (j = 0; j < num*num*num; j++) {
			for (k = 0; k < num*num*num; k++) {
				for (l = 0; l < num*num*num; l++) {
					int RamNum = k*k*k + l*l*l;

					// checking if i j k and l are different  
					if (i != j && i != k && i != l) {
						// placing in array
						arr[x] = RamNum;
						x++;
					}
				}
			}
		}	
	}
	int y=0;
	for (y = 0; y < x; y++){
		printf("%d\n", arr[y]);
	}
} 

int main(){
	int n;
	printf("please enter any number:");
	scanf("%d", &n);
	ramanujan_finder(n);
		
} 

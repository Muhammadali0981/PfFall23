/* Programmer:Muhammad Ali 23K-0052
* Date: 29/10/23
* Descrption:ramanujam numbers finder
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
					if (i != j && i != k && i != l && RamNum == i*i*i + j*j*j ) {
						// placing in array
						arr[x] = RamNum;
						x++;
					}
				}
			}
		}	
	}
	//removing duplicates 
	int a,b;
	for(a = 0;a < x; a++){
		for (b = 1;b < x; b++){
				if (a != b && arr[a]==arr[b]){
					
				arr[b]=0;
			}
		}	
	}
	int y=0;
	for (y = 0; y < x; y++){
		if(arr[y] != 0){
			printf("%d\n", arr[y]);
		}		
	}
} 

int main(){
	int n;
	printf("please enter any number:");
	scanf("%d", &n);
	ramanujan_finder(n);
		
} 

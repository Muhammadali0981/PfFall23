/* Programmer:Muhammad Ali 23K-0052
* Date: 18/10/23
* Descrption:2x2 array multiplication
*/

#include <stdio.h>

int main(){
	int a[2][2], b[2][2], c[2][2];
	int i,j , x;
	for(i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf("enter elment in %d row %d coloumn of matrix A=", i+1,j+1);
			scanf("%d", &a[i][j]);
		}
	}// end for
	
	for(i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf("enter elment in %d row %d coloumn of matrix B=", i+1,j+1);
			scanf("%d", &b[i][j]);
		}
	} // end for
	
	//Multiplying matrix
	for (i=0;i<2;i++) 
        for (j = 0;j<2;j++){
            c[i][j]=0;
            for (x=0;x<2;x++){
                c[i][j]+=a[i][x]*b[x][j];
            }
        }
    }	
    
    //printing output
     for (i=0;i<2;i++) {
        for (j=0;j<2;j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
	
}

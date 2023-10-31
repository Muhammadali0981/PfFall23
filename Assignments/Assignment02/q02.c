/* Programmer:Muhammad Ali 23K-0052
* Date: 30/10/23
* Descrption:finds largest square array with one 
*/


#include<stdio.h>

int main(){
    int a[100][100];
    int i,j,x,y,sum,sq,total=0;
    printf("enter number of rows and columns:");
    scanf("%d %d", &x, &y);
    for (i = 0;i<x;i++){
        for (j = 0; j < y ;j++){
            printf("enter element of %d row %d column:", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    if(x>y){
        sum=y*y;
        sq=y;
    }
    else{
        sum=x*x;
        sq=x;
    }
    while(total != sum){
        for (i = 0;i<sq;i++){
            for (j = 0; j < sq ;j++){
                total += a[i][j];
            }
        }
    sq--;
    sum=sq*sq;    
    }
    printf("array found of %dx%d dimensions",sq, sq );
}
    

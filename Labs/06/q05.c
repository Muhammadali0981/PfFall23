/* Programmer:Muhammad Ali 23K-0052
* Date: 03/10/23
* Descrption:number pattern printing
*/
#incl
#include <stdio.h>

int main() {
    int a[7];
    int i=0;
    while (i<7){
        a[i]=i;
        if (a[i]%2==0){//checking for odd an even
            printf("\n%d \t%d \t%d \t%d" ,a[i],a[i],a[i],a[i]);
        }
        else{
            printf("\n\t%d \t%d" ,a[i],a[i]);
        }
        i++;
    }
    
    return 0;
}

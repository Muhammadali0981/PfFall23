#include <stdio.h>

int main() {
    int a[6];
    int i=0;
    while (i<6){
        a[i]=i+1;
        if (a[i]%2==0){
            printf("\n%d \t%d \t%d \t%d" ,a[i],a[i],a[i],a[i]);
        }
        else{
            printf("\n\t%d \t%d" ,a[i],a[i]);
        }
        i++;
    }
    
    return 0;
}

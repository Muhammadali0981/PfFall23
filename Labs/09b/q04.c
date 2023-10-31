/* Programmer:Muhammad Ali 23K-0052
* Date: 31/10/23
* Descrption: Fibonacci numbers using recursive function 
*/
#include<stdio.h>

int fib(int a,int b,int ans, int n){
    if(n){
        printf("%d ");
        return fib(b,ans,ans+b,n-1); //replaces values a becomes b and b becomes sum
    }
} 

int main (){
    int num;
    printf("enter number of Fibonacci needed:");
    scanf("%d", &num);
    fib(1,0,1,num);

}
    


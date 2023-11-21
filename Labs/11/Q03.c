/* Programmer:Muhammad Ali 23K-0052
* Date: 21/11/23
* Descrption:comparing dates using date struct
*/

#include j<stdio.h>
typedef struct date{
    int day;
    int month;
    int year;
}date;

int main(){
    date a,b;
    printf("enter date one:");
    scanf("%d %d %d", &a.day, &a.month, &a.year);
    printf("enter date two:");
    scanf("%d %d %d", &b.day, &b.month, &b.year);

    if(a.day==b.day && a.month==b.month && a.year==b.year){
        printf("dates are same");
    }
    else{
        printf("dates are different");
    }




} 

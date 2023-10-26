/* Programmer:Muhammad Ali 23K-0052
* Date: 26/10/23
* Descrption:finds the number of time a character comes in a string
*/
#include <stdio.h>
#include <string.h>

int main() {
    char text[500],x;
    int i,k=0;

    puts("enter text");
    gets(text);
    printf("enter character you want to check:");
    scanf(" %c", &x);
    for(i=0; i<strlen(text); i++){
        if (text[i]==x){
            k++;
        }
    }
    printf ("the alphabet came %d times", k);

    return 0;
}

/* Programmer:Muhammad Ali 23K-0052
* Date: 23/10/23
* Descrption:prints man according to n
*/
//note:this code was made after a long disscussion witth a friend hence the logics used may be similair



#include <stdio.h>



void PrintHat(int n) {
	int i,j,k;
    for (i = 0; i < n - 2; i++) {
        for (j = 1; j < n; j++){
        	printf(" ");
		}
		

        for (k = 0; k < n; k++){
        	printf("*");
		}
        printf("\n");
    }

    printf(" ");
    for (i = 0; i < 3*n - 4; i++) {
        printf("*");
    }
    printf("\n");
} // end PrintHat(int)

void PrintFace(int n) {
	int i,k;
    for (i = 0; i < 3; i++) {
        switch(i) {
            case 0:
                for (k = 1; k < n; k++) printf(" ");
                printf("*");
                for (k = 2; k < n; k++) printf(" ");
                printf("*");
                break;
            case 1:
                for (k = -1; k < (3*n - 4)/2; k++) printf(" ");
                printf("|");
                break;
            case 2:
                for (k = 0; k < (3*n - 4)/2; k++) printf(" ");
                printf("\\_/");
                break;
        }
        printf("\n");
    }
    printf("\n");
} // end PrintFace(int)

void PrintNeck(int n) {
    int i;
    for (i = 0; i < (3*n - 4)/2; i++) {
		printf(" ");
    	
	}
	printf("| |\n");
} // end PrintNeck(int)

void PrintTorso(int n) {
	int i,j;
    for (i = 0; i < 3*n - 2; i++) printf("*");
    printf("\n");
    for (i = 1; i < n; i++) {
        for (j = 0; j < n/2; j++) printf("*");
        for (j = 0; j < n/2; j++) printf(" ");
        for (j = 0; j < n; j++) printf("*");
        for (j = 0; j < n/2; j++) printf(" ");
        for (j = 0; j < n/2; j++) printf("*");

        printf("\n");
    }
} // end PrintTorso(int)

void PrintLegs(int n) {
	int i,j;
    for (i = 1; i < n; i++) printf(" ");
    for (i = 0; i < n; i++) printf("*");
    printf("\n");
    for (i = 0; i < (3*n - 4)/2; i++) {
        for (j = 1; j < n; j++) printf(" ");
        for (j = 0; j < n/2; j++) printf("*");
        printf(" ");
        for (j = 0; j < n/2; j++) printf("*");

        printf("\n");
    }
} // end PrintLegs(int)

void PrintShoes(int n) {
	int i;
    for (i = 1; i < n/2; i++) printf(" ");
    for (i = 0; i < n; i++) printf("*");
    printf(" ");
    for (i = 0; i < n; i++) printf("*");
    printf("\n");
} // end PrintShoes(int)

int main() {
    int n;

    
        printf("Enter n= ");
        scanf("%d", &n);

    

    PrintHat(n);
    PrintFace(n);
    PrintNeck(n);
    PrintTorso(n);
    PrintLegs(n);
    PrintShoes(n);

    return 0;
} // end main()

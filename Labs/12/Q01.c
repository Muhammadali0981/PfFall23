/* Programmer:Muhammad Ali 23K-0052
* Date: 28/11/23
* Descrption:printig a CSV file in form of a table
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int format_line(char str[100])
{
    char delim[2] = ",";
    int cols = 0;
    char *col = strtok(str, delim);

    // separating words 
    while (col != NULL) {
        cols++;
        col[strcspn(col, "\n")] = 0; 
        printf("%-14s | ", col); // printing
        col = strtok(NULL, delim);
    }

    printf("\n");
    return cols;
} 

void read_file(FILE *fptr)
{
    char buffer[100];
    int rows = 0, cols = 0;

    // reading all lines
    while (!feof(fptr)) {
        rows = format_line(fgets(buffer, 100, fptr)); 
        cols++;
    }

    printf("\n\nrows: %d, cols: %d", cols, rows);
} 

int main()
{
    FILE *fptr = fopen("events.csv", "r");
    read_file(fptr);
    fclose(fptr);

    return 0;
} // end main()

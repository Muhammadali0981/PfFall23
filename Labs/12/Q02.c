/* Programmer:Muhammad Ali 23K-0052
* Date: 28/11/23
* Descrption:comparing two files
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // opening both files as binary
    FILE *fptr_1 = fopen("1.docx", "rb");
    FILE *fptr_2 = fopen("2.docx", "rb");

    // finding sizes of each file
    fseek(fptr_1, 0L, SEEK_END);
    int size_1 = ftell(fptr_1);
    rewind(fptr_1);

    fseek(fptr_2, 0L, SEEK_END);
    int size_2 = ftell(fptr_2);
    rewind(fptr_2);

    char *buffer_1 = (char *)malloc(sizeof(char) * size_1);
    char *buffer_2 = (char *)malloc(sizeof(char) * size_2);
 
    // reading data
    fread(buffer_1, 1, size_1, fptr_1);
    fread(buffer_2, 1, size_2, fptr_2);
    printf("%s\n%s\n", buffer_1, buffer_2);

    // checking if content from file is same
    if (!strcmp(buffer_1, buffer_2)) {
        printf("Same");

    } 
    else{
        printf("Not same");
    }

    fclose(fptr_1);
    fclose(fptr_2);

    return 0;
} // end main()

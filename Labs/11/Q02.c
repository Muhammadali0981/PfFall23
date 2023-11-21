/* Programmer:Muhammad Ali 23K-0052
* Date: 21/11/23
* Descrption:data of cars using structures
*/

#include <stdio.h>
#include <string.h>

struct engine{
    char id[5];
    int year;
    char material[100];
    int quantity;
};


int main(){
    struct engine data[100];
    int num;
    printf("Enter Number of parts: ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("Enter Serial Number of parts %d: ", i+1);
        scanf("%s", &data[i].id);
        printf("Enter Year of part %d: ", i+1);
        scanf("%d", &data[i].year);
        printf("Enter Material of part %d: ", i+1);
        scanf("%s", &data[i].material);
        printf("Enter Quantitiy of parts %d: ", i+1);
        scanf("%d", &data[i].quantity);
    }
    for (int i = 0; i < num; i++)
    {
        if (strcmp(data[i].id, "BB1") > 0 && strcmp(data[i].id, "CC6") < 0){//using compare returns to 
            printf("\nSerial Number: %s \nYear: %d \nMaterial: %s \nQuantity: %d\n", data[i].id, data[i].year, data[i].material, data[i].quantity);
        }
    }
    
}

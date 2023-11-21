/* Programmer:Muhammad Ali 23K-0052
* Date: 21/11/23
* Descrption:comparing dates using date struct
*/


#include <stdio.h>

typedef struct data
{
    char name[20];
    int salary;
    int hours;
} data;


int main(){
    data employee[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter Name, Salary, Hours of Employee %d: ", i+1);
        scanf("%s %d %d", &employee[i].name, &employee[i].salary, &employee[i].hours);
    }
    for (int i = 0; i < 10; i++)
    {
        if (employee[i].hours >=12)
        {
            employee[i].salary += 150;
        }
        else if (employee[i].hours == 10)
        {
            employee[i].salary += 100;
        }
        else if (employee[i].hours == 8)
        {
            employee[i].salary += 50;
        }
        printf("Employee %d: \n", i+1);
        printf("\nName: %s \nSalary: %d \nHours: %d\n", employee[i].name, employee[i].salary, employeed[i].hours);
    }
    
}

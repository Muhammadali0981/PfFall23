/* Programmer:Muhammad Ali 23K-0052
* Date: 21/11/23
* Descrption:data of students using structures
*/
#include <stdio.h>

struct studentdata {
  int RollNumber;
  int Year;
  char Name[100];
  char Department[100];
  char course[100];
};

int main(){
    int num,roll,year;
    struct studentdata data[450];
    printf("enter number of students:");
    scanf("%d", &num);
    if(num>450){
        printf("enter valid value");
    }
    else{
        for(int i=0; i<num; i++){
            printf("enter RollNumber of student %d:", i+1);
            scanf("%d", &data[i].RollNumber);

            printf("enter Year student %d is in:", i+1);
            scanf("%d", &data[i].Year);

            printf("enter Name of student %d:", i+1);
            scanf("%s", &data[i].Name);

            printf("enter Department of student %d:", i+1);
            scanf("%s", &data[i].Department);

            printf("enter course of student %d:", i+1);
            scanf("%s", &data[i].course);
            
        }
    }
    printf("enter roll number of student whose data you wish to see:");
    scanf("%d", &roll);
    for(int i=0; i<num; i++){
        if(data[i].RollNumber==roll){
            printf("roll number:%d \nYear:%d \nName:%s \nDepartment:%s \ncourse:%s",data[i].RollNumber,data[i].Year,data[i].Name,data[i].Department,data[i].course);
        }
    printf("\nenter yaer of students whose name you want to see:");
    scanf("%d", year);
    for(int i=0; i<num; i++){
        if(data[i].Year==year){
            printf("Name %d:%s\n", i+1,data[i].Name );
        }

    }
          
    }
}

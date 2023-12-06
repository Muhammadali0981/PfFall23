/* Programmer:Muhammad Ali 23K-0052
* Date: 05/12/23
* Descrption:making company employee management system through structs
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{ //nested structure

	char Name[50];
	char Role[50];
	int Communication;
	int Teamwork;
	int Creativity;

}data;

typedef struct{ //main structure

	char depart[50];
	data person[5];

}dep;

int main(){


	printf("------------------------\nName:Muhammad Ali\nRoll Name:23K-0052\n------------------------\n");

	dep arr[4];//array for department names

	int x,y;//variables for random functions

	int max=-10000;//for best deoartment testb
	int Sum=0;
	int best;

	//all pools of names and roles
	char roles[][15]={"director","executive","manager","employee","trainee"};
	int buffer[20]={-1};
	char depname[][40]={"HR","Finance","Marketing","Logistics"};
	char names[][20]={"percy","john","fasih","owais","harry",
					"peter","ted","sarah","biden","justin","boris",
					"ammanda","ayesha","ahmed","ali","abu bakr","umar","usman","mia"};



	//loops for random assignmnets
	for (int i = 0; i < 4; i++)
	{

		strcpy(arr[i].depart,depname[i]);

		for (int j = 0; j < 5; j++)
		{
			
			
			do{
				x=rand()%20;

			}while(buffer[x] == -2);

			buffer[x]= -2;

			strcpy(arr[i].person[j].Name,names[x]);
			strcpy(arr[i].person[j].Role,roles[j]);

			y = rand()%100+1;
			arr[i].person[j].Creativity=y;

			y = rand()%100+1;
			arr[i].person[j].Teamwork=y;

			y = rand()%100+1;
			arr[i].person[j].Communication=y;
		}
	}


	//checking best deparment award
	for (int i = 0; i < 4; ++i)
	{
		for(int j = 0; j < 5; ++j)
		{
			Sum = arr[i].person[j].Creativity+arr[i].person[j].Teamwork+arr[i].person[j].Communication;

		}


		printf("Sum for departement %s is %d\n", depname[i], Sum);
		if(Sum > max){

			max=Sum;

			best=i;
		}
	}

	printf("Best departement is: %s\n", depname[best] );
	printf("|%*s| %*s| %13s| %11s| %9s|\n", 16, "Employee Name", 16, "Employee Role", "Communication", "Creativity", "Teamwork");
	for (int i = 0; i < 5; ++i)
	{
		printf("|%*s| %*s| %13d| %11d| %9d|\n",16, arr[best].person[i].Name, 16, arr[best].person[i].Role, arr[best].person[i].Communication, arr[best].person[i].Creativity, arr[best].person[i].Teamwork);
	}
}
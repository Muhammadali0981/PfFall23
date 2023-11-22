/* Programmer:Muhammad Ali 23K-0052
* Date: 22/11/23
* Descrption:using netsed structs to print out put
*/

#include <stdio.h>
#include <string.h>

typedef struct{ //netsed structure 

		int employee_id;
		int salary;
		char name[100];

}employee;

typedef struct{ //main structure

	char organisation_name[100];
	char  organisation_number[100];
	employee employee; 

}organisation_data;


int main()
{
	organisation_data data;

	strcpy(data.organisation_name,"NU-fast");
	strcpy(data.organisation_number,"NUFAST123ABC");
	data.employee.employee_id=127;
	strcpy(data.employee.name,"Linus Sebastain");
	data.employee.salary=400000;

	printf("size of structure organisation:%d\n", sizeof(organisation_data));
	printf("organisation name:%s\norganisation number:%s\nEmployee id:%d\nEmployee Name:%s\nEmployee Salary:%d", data.organisation_name, 
		data.organisation_number,data.employee.employee_id,data.employee.name,data.employee.salary);
}

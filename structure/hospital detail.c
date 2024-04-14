//doctor name,hospital name,no of department,doctor id,doctor salary
#include<stdio.h>
#include<conio.h>
void main()
{
	struct Hospital
	{
		char Hospital_name[50];
		char Doctor_name[20];
		int No_of_department;
		char Doctor_id;
		int Doctor_salary;
	};
	struct Hospital h1,h2,h3;
	
	printf("enter Hospital name,Doctor name,Doctor id,Doctor salary,No of department\n");
	scanf("%s\t%s\t%d\t%s\t%d\n",&h1.Hospital_name,&h1.Doctor_name,&h1.No_of_department,&h1.Doctor_id,&h1.Doctor_salary);
	scanf("%s\t%s\t%d\t%s\t%d\n",&h1.Hospital_name,&h1.Doctor_name,&h1.No_of_department,&h1.Doctor_id,&h1.Doctor_salary);
	scanf("%s\t%s\t%d\t%s\t%d\n",&h1.Hospital_name,&h1.Doctor_name,&h1.No_of_department,&h1.Doctor_id,&h1.Doctor_salary);
    printf("Hospital Details =\n");
    printf("%s\t%s\t%d\t%s\t%d\n",h1.Hospital_name,h1.Doctor_name,h1.No_of_department,h1.Doctor_id,h1.Doctor_salary);
    printf("%s\t%s\t%d\t%s\t%d\n",h1.Hospital_name,h1.Doctor_name,h1.No_of_department,h1.Doctor_id,h1.Doctor_salary);
    printf("%s\t%s\t%d\t%s\t%d\n",h1.Hospital_name,h1.Doctor_name,h1.No_of_department,h1.Doctor_id,h1.Doctor_salary);
	getch();
	
}

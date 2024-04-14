//student name,percentage,rollno,school name,subject
#include<stdio.h>
#include<conio.h>
void main()
{
	struct Student
	{
		char School_name[50];
		char Student_name[20];
		float Percentage;
		int Rollno;
		char Subject[20];
	};
	struct Student s1,s2,s3,s4;
	
	printf("enter school name, student name,percentage,Rollno,Subject\n");
	scanf("%s\t%s\t%f\t%d\t%s",&s1.School_name,&s1.Student_name,&s1.Percentage,&s1.Rollno,&s1.Subject);
	scanf("%s\t%s\t%f\t%d\t%s",&s2.School_name,&s2.Student_name,&s2.Percentage,&s2.Rollno,&s2.Subject);
	scanf("%s\t%s\t%f\t%d\t%s",&s3.School_name,&s3.Student_name,&s3.Percentage,&s3.Rollno,&s3.Subject);
	scanf("%s\t%s\t%f\t%d\t%s",&s4.School_name,&s4.Student_name,&s4.Percentage,&s4.Rollno,&s4.Subject);
    printf("Student Details =\n");
	printf("%s\t%s\t%f\t%d\t%s\n",s1.School_name,s1.Student_name,s1.Percentage,s1.Rollno,s1.Subject);
	printf("%s\t%s\t%f\t%d\t%s\n",s2.School_name,s2.Student_name,s2.Percentage,s2.Rollno,s2.Subject);
	printf("%s\t%s\t%f\t%d\t%s\n",s3.School_name,s3.Student_name,s3.Percentage,s3.Rollno,s3.Subject);
	printf("%s\t%s\t%f\t%d\t%s\n",s4.School_name,s4.Student_name,s4.Percentage,s4.Rollno,s4.Subject);
	getch();
	
}

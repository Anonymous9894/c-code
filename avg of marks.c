#include<stdio.h>
#include<conio.h>
void main()
{
	float science,maths,english,ssc,avg;
	printf("Enter the Marks of Science:\n");
	scanf("%f",&science);
	printf("Enter the Marks of Maths:\n");
	scanf("%f",&maths);
	printf("Enter the Marks of English:\n");
	scanf("%f",&maths);
	printf("Enter the Marks of ssc");
	scanf("%f",&ssc);
	avg=(science+maths+english+ssc)/4;
	printf("Average of given subject marks=%f",avg);
	getch();
}

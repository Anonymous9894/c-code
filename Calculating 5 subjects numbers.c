#include<stdio.h>
#include<conio.h>
void main()
{
	float Python,CPP,C,Java,JavaScript,TotalSubjectsMarks;
	printf("Enter the Marks obtain in Python=\n");
	scanf("%f",&Python);
	printf("Enter the Marks obtain in CPP=\n");
	scanf("%f",&CPP);
	printf("Enter the Marks obtain in C=\n");
	scanf("%f",&C);
	printf("Enter the Marks obtain in Java=\n");
	scanf("%f",&Java);
	printf("Enter the Marks obtain in Java Script=\n");
	scanf("%f",&JavaScript);
	TotalSubjectsMarks=Python+CPP+C+Java+JavaScript;
	printf("Sum all subjects Numbers=%f",TotalSubjectsMarks);
	getch();
	
}

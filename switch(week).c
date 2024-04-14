#include<stdio.h>
#include<conio.h>
void main()
{
	int no;
	printf("enter any number to know weeks:");
	scanf("%d",&no);
	switch(no)
	{
	case 1 : printf("it is a Monday,It's starting of the weekdays"); break;
	case 2 : printf("it is a Tuesday"); break;
	case 3 : printf("it is a wednesday"); break;
	case 4 : printf("it is a Thursday"); break;
	case 5 : printf("it is a Friday"); break;
	case 6 : printf("it is a Saturday"); break;
	case 7 : printf("it is a Sunday,It's weekend"); break;
	default: printf("ERROR"); break;
    }
	getch();
	
}

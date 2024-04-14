#include<stdio.h>
#include<conio.h>
void main()
{
	int week;
	printf("enter any no from 1 to 7\n");
	scanf("%d",&week);
	switch(week)
	{
	case 1 : printf(" first day of week MONDAY"); break;
	case 2 : printf(" second day of week TUESDAY"); break;
	case 3 : printf(" third day of week WEDNESDAY"); break;
	case 4 : printf(" fourth day of week THURSDAY"); break;
	case 5 : printf(" fifth day of week FRIDAY"); break;
	case 6 : printf(" sixth day of week SATURDAY"); break;
	case 7 : printf(" last day of week SUNDAY"); break;
	default : printf("!ERROR!"); break;
    }
		  getch();
}

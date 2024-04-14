#include<stdio.h>
#include<conio.h>
void main()
{
	int no;
	printf("enter any no to know months of the year");
	scanf("%d",&no);
	switch(no)
	{
		case 1 : printf("it's January"); break;
		case 2 : printf("it's Febuary"); break;
		case 3 : printf("it's March"); break;
		case 4 : printf("it's April"); break;
		case 5 : printf("it's May"); break;
		case 6 : printf("it's June"); break;
		case 7 : printf("it's July"); break;
		case 8 : printf("it's August"); break;
		case 9 : printf("it's September"); break;
		case 10 : printf("it's October"); break;
		case 11 : printf("it's November"); break;
		case 12 : printf("it's December"); break;
		default : printf("ERROR");
	}
	getch();
}

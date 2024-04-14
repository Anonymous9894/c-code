#include<stdio.h>
#include<conio.h>
void main()
{
	int i=3;
	int *j;
	j=&i;
	printf("value of i=%d\n",i);
	printf("value of j=%d\n",*j);
	getch();
}

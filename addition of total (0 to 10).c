#include<stdio.h>
#include<conio.h>
void main()
{
	int a,sum;
	sum=0;
	a=1;
	while(a<=10)
	{
		sum=sum+a;
		a++;
	}
	printf("addition= %d ",sum);
	getch();
}

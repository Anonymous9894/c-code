#include<stdio.h>
#include<conio.h>
void main()
{
	int a,x;
	printf("enter any no\n");
	scanf("%d",&a);
	printf("output are %d",x);
	while(x<=50)
	{
		printf("%d\n",x);
		x=a++;
	}
	
	getch();
}

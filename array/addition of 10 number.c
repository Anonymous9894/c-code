#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,sum=0;
	printf("enter 10 number:-\n");
	for(i=0;i<=10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=10;i++)
	{
	sum=sum+a[i];
    }
    printf("\n addition of 10 No ==> %d",sum);
    getch();
}

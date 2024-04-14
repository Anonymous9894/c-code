#include<stdio.h>
#include<conio.h>
void  main()
{
	int i,n,sum=0;
	printf("enter any 'n' number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum is= %d",sum);
	getch();
}

#include<stdio.h>
#include<conio.h>
void main()

{
	int i,n,f=1;
	printf("enter any number:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
  {
  	f=f*i;
  }
	printf("\n factorial: %d is %d",n,f);
	getch();
}

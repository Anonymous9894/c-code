#include<stdio.h>
#include<conio.h>
void main()
{
	int sum,a;
	sum=0;
	a=1;
	while(a<=10)
	{
	sum=sum+a;
	a=a+2;
    }
    printf("addition of odd numbers is %d",sum);
    getch();
    
}

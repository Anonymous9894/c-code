#include<stdio.h>
#include<stdio.h>
void main()
{
	int a,b,c,d;
	a=0;
	b=1;
	printf("%d\t %d\t",a,b);
	d=3;
	while(d<=10)
	{
		c=a+b;
        printf("%d\t",c);
		a=b;
		b=c;
		d=d+1;	
	}
	getch();
}

#include<stdio.h>
#include<conio.h>
add(int x,int y)
{
	int z;
	z=x+y;
	printf("addition=%d\n",z);
}
sub(int x,int y)
{
	int z;
	z=x-y;
	printf("subtraction=%d\n",z);
}
mul(int x,int y)
{
	int z;
	z=x*y;
	printf("multiplication=%d\n",z);
}
div(int x,int y)
{
	int z;
	z=x/y;
	printf("division=%d\n",z);
}
void main()
{
	int x,y,n;
	printf("main program\n");
	printf(" 1) addition\n ");
	printf(" 2) substraction\n ");
	printf(" 3) multiplication\n ");
	printf(" 4) division\n ");
	printf(" enter your choice number=\n");
	scanf("%d",&n);
	printf("enter any two numbers=\n");
	scanf("%d%d",&x,&y);
	switch(n)
	{
		case 1: add(x,y); break;
		case 2: sub(x,y); break;
		case 3: mul(x,y); break;
		case 4: div(x,y); break;
		default : printf("invalid choice number\n");
	}
	getch();
}

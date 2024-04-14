#include<stdio.h>
#include<conio.h>
add(int x, int y)
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
	int x,y;
	printf("enter any two numbers\n");
	scanf("%d%d",&x,&y);
	add(x,y);
	sub(x,y);
	mul(x,y);
	div(x,y);
	getch();
}

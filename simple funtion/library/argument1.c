#include<stdio.h>
#include<conio.h>
add(int x,int y)
{
	int z;
	z=x+y;
	return(z);
}
int main()
{
	int x,y,z;
	printf("enter any two number\n");
	scanf("%d%d",&x,&y);
	z=add(x,y);
	printf("addition=\n%d",z);

}

#include<stdio.h>
#include<conio.h>
void subs(int n1,int n2)
{
	printf("n1-n2 = %d\n",n1-n2);
}
int main()
{
	void (*funcpoint[])(int,int)={subs};
	int n1=40,n2=2;
	printf("subtraction of \n");
	(*funcpoint[0])(n1,n2);
	return 0;
}

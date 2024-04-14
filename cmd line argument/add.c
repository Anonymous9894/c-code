#include<stdio.h>
#include<conio.h>
int cal_sum(int n1,int n2)
{
	return n1+n2;
}
int main()
{
	int (*f)(int,int);
	f=cal_sum;
	int r1=f(3,69);
	int r2=cal_sum(5,33);
	printf("functionpointer : %d\n",r1);
	printf("function with argument : %d\n",r2);
	return 0;
}

#include<stdio.h>
void main()
{
	int c,cpp,java,python,html,avg;
	printf("Enter your subject marks:\n");
	scanf("%d%d%d%d%d",&c,&cpp,&java,&python,&html);
	avg=(c+cpp+java+python+html)/5;
	printf("Average=%d",avg);
}

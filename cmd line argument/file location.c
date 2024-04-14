#include<stdio.h>
#include<conio.h>
void main(int argc,char *argv[1])
{
	printf("techvidvan tutorial: example of command line arguments in c! \n");
	printf("argument name is :%s\n",argv[0]);
	printf("arguments passes:%d\n",argc);
	if(argc<2)
	{
		printf("did not pass any arguments\n");
	}
	else
	{
		printf("first argument:%s\n",argv[1);
	}
}

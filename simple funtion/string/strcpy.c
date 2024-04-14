#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[100],str2[100];
	puts("enter str1 string\n");
	gets(str1);
	strcpy(str2,str1);
	printf("copied string is = %s",str2);
	getch();
}

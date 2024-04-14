#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[50],str2[50];
	puts("enter str1 string\n");
	gets(str1);
	puts("enter str2 string\n");
	gets(str2);
	strcat(str1,str2);
	puts(str1);
	getch();
}

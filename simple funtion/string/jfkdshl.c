#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[20],str2[20];
	puts("enter str1 string\n");
	gets(str1);
	puts("enter str2 string\n");
	gets(str2);
	if(strcmp(str1,str2)==0)
	puts("both string are equal");
	else
	pur("string are not equal");
	getch();
}

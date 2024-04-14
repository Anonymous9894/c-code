#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("addition.c","r");
	while(ch!=EOF)
	{
		ch=fgetc(fp);
		putchar(ch);
	}
	fclose(fp);
}

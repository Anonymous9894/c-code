#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("poem","w");
	while((ch=getchar())!='#')
	{
		putc(ch,fp);
	}
	fclose(fp);
}

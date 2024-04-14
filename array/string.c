#include<stdio.h>
#include<string.h>
void main()
{
	char s1[20],s2[20],s3[20];
	int i,j,k;
	printf("enter first string==");
	scanf("%s",s1);
	printf("enter second string==");
	scanf("%s",s2);
	i=strlen(s1);
	j=strlen(s2);
	for(k=0;k<i;k++)
	s3[k]=s1[k];
	for(k=0;k<i;k++)
	s3[i+k]=s2[k];
	s3[i+j]='\0';
	printf("two string are= %s & %s,\n New strring is= %s",s1,s2,s3);
	getch();
}

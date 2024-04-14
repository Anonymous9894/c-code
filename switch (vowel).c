#include<stdio.h>
#include<conio.h>
void main()
{
	char alphabet;
	printf("enter any alphabet letters(a-z)=");
	scanf("%c",&alphabet);
	switch(alphabet)
	{
		case 'a':printf("it is a vowel"); break;
		case 'e':printf("it is a vowel"); break;
		case 'i':printf("it is a vowel"); break;
		case 'o':printf("it is a vowel"); break;
		case 'u':printf("it is a vowel"); break;
		default :printf("it is not a vowel"); break;
	}
	getch();
}

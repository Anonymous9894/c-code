#include<stdio.h>
#include<conio.h>
void main()
{
	char alphabet;
	printf("enter any alphabet letters (a-z):");
	scanf("%c",&alphabet);
	switch(alphabet)
	{
		case 'a' : printf("vowel"); break;
		case 'e' : printf("vowel"); break;
		case 'i' : printf("vowel"); break;
		case 'o' : printf("vowel"); break;
		case 'u' : printf("vowel"); break;
        default : printf("it is not a vowel");
	}
	getch();
}


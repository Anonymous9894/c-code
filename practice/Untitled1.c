#include<stdio.h>
#include<conio.h>
void main()
{
	char alphabets;
	printf("enter any alphabets\n");
	scanf("%c",&alphabets);
	switch(alphabets) 
	{
		case 'a' : printf("vowel"); break;
		case 'e': printf("vowel"); break;
		case 'i': printf("vowel"); break;
        case 'o': printf("vowel"); break;
		case 'u' :printf("vowel"); break;
		default: printf("it is not vowel"); break;			
	}
	getch();
}

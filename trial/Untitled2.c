#include<stdio.h>
#include<conio.h>
void main()
{
	char alphabets;
	printf("enter any alphabets letter:");
	scanf("%c",&alphabets);
	if (alphabets=='a'||alphabets=='e'||alphabets=='i'||alphabets=='o'||alphabets=='u')
	printf("it is an vowel letter");
	else
	printf("it is consonent");
	
	getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
	char alphabets;
	printf("enter any alphabets letter:");
	scanf("%c",&alphabets);
	if (alphabets=='a'||alphabets=='e'||alphabets=='i'||alphabets=='o'||alphabets=='u')
	{
		printf("it is an vowel letter");
	}
	if (alphabets=='b'||alphabets=='c'||alphabets=='d'||alphabets=='f'||alphabets=='g'||alphabets=='h'||alphabets=='j'||alphabets=='k'||alphabets=='l'||alphabets=='m'||alphabets=='n'||alphabets=='p'||alphabets=='q'||alphabets=='r'||alphabets=='s'||alphabets=='t'||alphabets=='v'||alphabets=='w'||alphabets=='x'||alphabets=='y'||alphabets=='z')
	
	 printf("it is a consonent letter");
	 else
	 printf("it is not alphabet");
	
	getch();
}

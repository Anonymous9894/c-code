#include<stdio.h>
#include<conio.h>
void main()
{
	char alphabet;
	printf("enter any alphabet letters from(N,S,A,H,P) For my info=");
	scanf("%c",&alphabet);
	switch(alphabet)
	{
		case 'N':printf("My name is Rohin"); break;
		case 'S':printf("Math\nPhysics\nChemistry\nP.e"); break;
		case 'A':printf("My age is 18yrs"); break;
		case 'H':printf("My height is 5.10 inch"); break;
		case 'P':printf("My passion is to research about new things"); break;
		default :printf("This is not my information"); break;
	}
	getch();
}

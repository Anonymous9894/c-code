#include<stdio.h>
#include<conio.h>
void main()
{
	char info;
	printf("enter any alphabet to get my info(N,G,A,D,Q,S):");
	scanf("%c",&info);
	switch(info)
	{
		case 'N' : printf("My name is Rohin Rana"); break;
	    case 'G' : printf("Gender:- Male"); break;
	    case 'A' : printf("Age:- 18yrs"); break;
	    case 'D' : printf("Date Of Year:-2004"); break;
	    case 'Q' : printf("Qualification:- 11th pass out"); break;
	    case 'S' : printf("maths\nphysics\nchemistry\nPe"); break;
	    default : printf("No Information Provided"); break;
	}
	getch();
}

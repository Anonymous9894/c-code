#include<stdio.h>
#include<conio.h>
void main()
{
	float radius,height,volume;
	printf("enter the radius of cylinder:\n");
	scanf("%f",&radius);
	printf("enter the height of cylinder:\n");
	scanf("%f",&height);
	volume=3.14*radius*radius*height;
	printf("volume of cylinder=%f",volume);
	getch();
	
}

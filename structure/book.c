#include<stdio.h>
#include<conio.h>
void main()
{
	struct book
	{
		char name[20];
		float price;
		int pages;
	};
	struct book b1,b2,b3;
	
	printf("enter name,price and no's of pages of 3 books\n");
	scanf("%s\t%f\t%d",&b1.name,&b1.price,&b1.pages);
	scanf("%s\t%f\t%d",&b2.name,&b2.price,&b2.pages);
	scanf("%s\t%f\t%d",&b3.name,&b3.price,&b3.pages);
    printf("Bill =\n");
	printf("%s\t%f\t%d\n",b1.name,b1.price,b1.pages);
	printf("%s\t%f\t%d\n",b2.name,b2.price,b2.pages);
	printf("%s\t%f\t%d\n",b3.name,b3.price,b3.pages);
	getch();
}

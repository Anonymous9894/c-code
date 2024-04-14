#include<stdio.h>
#include<conio.h>
void main()
{
	struct bill
	{
		char bname[20];
		int qty;
		float price;
		float bill;
	};
	struct bill b1;
	printf("enter book name,book qty,book price\n");
	scanf("%s%d%f",&b1.bname,&b1.qty,&b1.price);
	b1.bill=b1.price*b1.qty;
	printf("book=%s\nbookqty=%d\nbookprice=%f\nbill=%f\n",b1.bname,b1.qty,b1.price,b1.bill);
	getch();
}

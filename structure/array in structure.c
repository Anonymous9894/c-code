#include<stdio.h>
#include<conio.h>
struct point
{
	int x,y;
};
 void main()
 {
 	struct point a[10];
 	a[0].x=10;
 	a[0].y=20;
 	printf("%d\n%d",a[0].x,a[0].y);
 	getch();
 }

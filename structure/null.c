#include<stdio.h>
void main(int arge,char *argev[])
{
	void *pvdata=NULL;
	int *idata=NULL;
	char *cdata=NULL;
	float *fdata=NULL;
	long int *ldata=NULL;
	printf("size of void pointer=%d\n\n",sizeof(pvdata));
	printf("size of char pointer=%c\n\n",sizeof(cdata));
	printf("size of int pointer=%d\n\n",sizeof(idata));
	printf("size of float pointer=%f\n\n",sizeof(fdata));
	printf("size of long int pointer=%ld\n\n",sizeof(ldata));
	getch();
}

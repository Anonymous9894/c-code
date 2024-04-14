#include<stdio.h>
#include<conio.h>
void main()
{
	int rollno;
	printf("enter the Roll No of class 12th student for info:");
	scanf("%d",&rollno);
	switch(rollno)
	{
		case 1 : printf("Name:Ram\nClass:12\nsection:a\nAge:18\nSubject:PCM\nBlood group:A+\n"); break;
		case 2 : printf("Name:Shyam\nClass:12\nsection:a\nAge:17\nSubject:PCB\nBlood group:B+\n"); break;
		case 3 : printf("Name:Sita\nClass:12\nsection:a\nAge:16\nSubject:PCM\nBlood group:o+\n"); break;
		case 4 : printf("Name:Rohi\nClass:12\nsection:a\nAge:18\nSubject:PCM\nBlood group:Ab+\n"); break;
		case 5 : printf("Name:Abhishek\nClass:12\nsection:a\nAge:18\nSubject:PCB\nBlood group:B+\n"); break;
		case 6 : printf("Name:Onio\nClass:12\nsection:a\nAge:19\nSubject:PCM\nBlood group:A-\n"); break;
		case 7 : printf("Name:Simran\nClass:12\nsection:a\nAge:18\nSubject:PCM\nBlood group:B-\n"); break;
		case 8 : printf("Name:Sam\nClass:12\nsection:a\nAge:18\nSubject:PCM\nBlood group:A+\n"); break;
		case 9 : printf("Name:Sandip\nClass:12\nsection:a\nAge:16\nSubject:PCB\nBlood group:O-\n"); break;
		case 10 : printf("Name:Nikita\nClass:12\nsection:a\nAge:18\nSubject:PCM\nBlood group:AB-\n"); break;
		case 11 : printf("Name:Nio\nClass:12\nsection:a\nAge:19\nSubject:PCM\nBlood group:A+\n"); break;
		case 12 : printf("Name:hina\nClass:12\nsection:a\nAge:18\nSubject:PCB\nBlood group:o+\n"); break;
		case 13 : printf("Name:Rio\nClass:12\nsection:a\nAge:17\nSubject:PCM\nBlood group:A+\n"); break;
		case 14 : printf("Name:Cene\nClass:12\nsection:a\nAge:18\nSubject:PCM\nBlood group:B+\n"); break;
		case 15 : printf("Name:Michal\nClass:12\nsection:a\nAge:15\nSubject:PCB\nBlood group:O-\n"); break;
		default : printf("this roll No does not Excist");
    }
    getch();
}

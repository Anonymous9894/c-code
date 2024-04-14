//bank employ,name of bank,branch,salary,employ id
#include<stdio.h>
#include<conio.h>
void main()
{
	struct bank
	{
		char bank_name[50];
		char branch_name[20];
		int branch_code;
		char employee_id[20];
		char employee_name[20];
		int employee_salary;
	};
	struct bank b1,b2,b3;
	
	printf("enter bank name,branch name,branch code,employe id,employee name,employee salary\n");
	scanf("%s\t%s\t%d\t%s\t%s\t%d\n",&b1.bank_name,&b1.branch_name,&b1.branch_code,&b1.employee_id,&b1.employee_name,&b1.employee_salary);
	scanf("%s\t%s\t%d\t%s\t%s\t%d\n",&b2.bank_name,&b2.branch_name,&b2.branch_code,&b2.employee_id,&b2.employee_name,&b2.employee_salary);
	scanf("%s\t%s\t%d\t%s\t%s\t%d\n",&b3.bank_name,&b3.branch_name,&b3.branch_code,&b3.employee_id,&b3.employee_name,&b3.employee_salary);
    printf("Bank Details =\n");
    printf("%s\t%s\t%d\t%s\t%s\t%d\n",b1.bank_name,b1.branch_name,b1.branch_code,b1.employee_id,b1.employee_name,b1.employee_salary);
	printf("%s\t%s\t%d\t%s\t%s\t%d\n",b2.bank_name,b2.branch_name,b2.branch_code,b2.employee_id,b2.employee_name,b2.employee_salary);
	printf("%s\t%s\t%d\t%s\t%s\t%d\n",b3.bank_name,b3.branch_name,b3.branch_code,b3.employee_id,b3.employee_name,b3.employee_salary);
	getch();
	
}

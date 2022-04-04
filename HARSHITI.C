/*sugata mitra team
program to calculate tax on income*/
#include<stdio.h>
#include<conio.h>
void main()
{
int G; float E,tax;
clrscr();
printf("enter the gender");
scanf("%d",&G);
// 0 means female, 1 means male
if(G==1)
{
	printf("enter the income of employee");
	scanf("%f",&E);
	if(E>50000)
		tax=(12.0/100.0)*(float)E;
	else
		tax=0.0;
}
else
{
	printf("enter the income of employee");
	scanf("%f",&E);
	if(E>70000)
		tax=(10.0/100.0)*E;
	else
		tax=0.0;
}

printf("tax of employee= %f",tax);
getch();
}



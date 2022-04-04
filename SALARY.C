#include<stdio.h>
int main(){
float basic , gross , da , hra ;
/*input basic salary of employ*/
printf("Enter basic salary of an employee : ");
scanf("%f", &basic );
/*calculate D.A. and H.R.A. according to specific conditions */
if(basic <= 10000)
{	da = basic * 0.8;
	hra = basic * 0.2;}
else if(basic <= 20000)
{	da = basic * 0.9;
	hra = basic * 0.25;}
else
{	da = basic * 0.95;
	hra = basic * 0.3;}
/*calculate gross salary*/
gross = basic + hra + da;
printf("GROSS SALARY OF AN EMLOYEE = %f", gross );
return 0;
}
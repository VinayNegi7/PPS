/* Sugat mitra team
program to calcualte loan installement*/
#include<stdio.h>
#include<conio.h>
void main(){
float loanamt,interest,monthlypayment;
float i,firstmon,secondmon;
  clrscr();
printf("enter the loan amount");
scanf("%f",&loanamt);
printf("interest rate");
scanf("%f",&interest);
printf("montly payment");
scanf("%f",&monthlypayment);
//interest calculation//
i=loanamt*((interest/100)/12);
//amount with interest
i=i+loanamt;
firstmon=i-monthlypayment;
//first month payment with interest//
i=firstmon*((interest/100)/12);
i=i+firstmon;
secondmon=i-monthlypayment;
//second month payment with interest//
printf("remaning amount need to py after 1st installement:%2f\n",firstmon);
printf("remaining amount need to pay after 2nd installement:%2f\n",secondmon);
getch();
}



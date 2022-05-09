#include<stdio.h>
#include<conio.h>
void main()
{
int a=20 , b=10 , c ;
char ch ;
printf("\n enter the operator :");
scanf("%c",&ch);
switch(ch)
{
case '+' : c=a+b ; break ;
case '-' : c=a-b ; break ;
case '*' : c=a*b ; break ;
case '/' : c=a/b ; break ;
default : printf("operation not understood");
}
printf("value of c is : %d",c,'\n');
}
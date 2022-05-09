#include <stdio.h>
#include <conio.h>
void main(){
char op;
int a,b,c;
a=10,b=20;
clrscr();
printf("please enter an operator(+,-,*,/)");
scanf("%c",&op);

switch(op)
{
case '+':c=a+b;break;
case '-':c=a-b;break;
case '*':c=a*b;break;
case '/':c=a/b;break;
//in case of another inserted
default:printf("operator not understood");
}
printf("%d",c);
getch();
}




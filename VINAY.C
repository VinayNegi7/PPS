/* program of a simple calculator*/
#include<stdio.h>
#include<conio.h>
void main(){
 int a,b,c;
int ch;
clrscr();
printf("enter two numbers");
scanf("%d%d",&a,&b);
printf("enter choice");
scanf("%d",&ch);

switch(ch)
{
case 1: c=a+b;
printf("%d",c);
break;
case 2: c=a-b;
printf("%d",c);
break;
case 3: c=a*b;
printf("%d",c);
break;
case 4: c=a/b;
printf("%d",c);
break;
default: printf("invalid choice");
}
getch();
}

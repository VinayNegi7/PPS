#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter the value of a,b and c");
printf("\n a-");
scanf("%d",&a);
printf("\n b-");
scanf("%d",&b);
printf("\n c-");
scanf("%d",&c);
if(a>b){
if(a>c)
{
printf("a is the greatest and value is %d",a);
}
else
{
printf("c is the greatest and value is %d",c);
}
}
else{if(b>c)
{
printf("b is the greatest and value is %d",b);
}
else{
printf("c is the greatest and value is %d",c);
}
}
}


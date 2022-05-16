/*sugata mitra team
code for linear search*/
#include<stdio.h>
#include<conio.h>
void main(){
int a[10],n,i,loc=0,item;
clrscr();
printf("how many elements");
scanf("%d",&n);
printf("enter array");
for(i=0;i<n;i++);
{
scanf("%d",&a[i]);
}
printf("enter element to be searched");
scanf("%d",&item);
printf("linear search");
for(i=0;i<n;i++)
{if(a[i]==item)
{loc=i+1;
break;
}
}
if(loc>0)
printf("search successful");
else
printf("search unsucessful");
getch();

}

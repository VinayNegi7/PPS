#include <stdio.h>
#include <conio.h>
void main(){
int a;
int b;
printf(" enter the value of a and b");
printf("\n a=");
scanf("%d",&a);
printf("\n b=");
scanf("%d",&b);
if(a>b)
 {printf("a is the greatest and  value is %d",a);
  }
       else if (b>a)
        {printf(" b is the greatest and the value is %d",b);
         }
          else
           {printf(" both numbers are equal %d",a);
           }

          getch();
}




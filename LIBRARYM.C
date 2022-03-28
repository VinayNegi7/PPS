//calculate the library fine
#include<stdio.h>
void main(){int days , bookprice; float fine ;
printf("Enter No. of Days:");
scanf("%d",& days);
printf("Enter the book price :");
scanf("%d",& bookprice);
if(days<=30){fine=0;}
else{
	if(days>30 & days<=60){fine=(days-30)*(0.5);}
	else{
		if(days>60 & days<=90){fine=(days-30)*(0.6);}
		else{fine=(days-30)*1;
			if(fine>(2*bookprice)){fine=2*bookprice;}
			}
		}
	}
printf("the fine on the book = %f",fine);
}
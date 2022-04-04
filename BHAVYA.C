/* Sugata mitra tea,
program to calculate insurance*/
#include<stdio.h>
void main()//insurence for married males of age 25+
{
char G,martial;
//gender is G
int age;
printf("Enter age,Gender,martial status:");
scanf("%d,%c,%c" , &age,&G,&martial);
if(martial=='M'&& age>25 && G=='M')
{
	printf("The Person is insured");
}else
{
printf("The Person is not insured");
}
}

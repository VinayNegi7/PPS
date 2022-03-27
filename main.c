/*program to input electricity unit charges & calculate electricity bill
for first 50 units Rs.2/unit
for next 100 units Rs.2.50/unit
for next 100 units Rs.5.25/unit
for the units above 250 Rs.6.30/unit*/
#include <stdio.h>
void main()
{float unit,bill;

printf("\n enter the electricity unit charges");
scanf("%f",&unit);
if(unit<=50)
{ bill =unit*2;

}
else if (unit<=150)
{
     bill=100+(unit -50)*2.50;

}
else if (unit<=250)
{
     bill=350+(unit- 150)*5.25;

} else
{
     bill=875+(unit-250)*6.30;

}  printf("\n unit used =%f \t electricity bill=%f", unit, bill);

}
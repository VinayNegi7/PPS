/*Sugata Mitra PPS Group*/
/*Fibonacci Sequence upto N terms*/ 

#include <stdio.h>
int main()
{
int i , n ;
int a1= 0 , a2= 1 ;
int nextTerm= a1 + a2 ;
printf("Enter the number of terms:");
scanf("%d",&n);
printf("The Fibonacci Sequence is %d %d ",a1,a2);
for (i=2; i<=n; ++i)
{
 nextTerm= a1 + a2;
 printf("%d ",nextTerm);
 a1 = a2;
 a2 = nextTerm;    
 } 
 return 0;
}

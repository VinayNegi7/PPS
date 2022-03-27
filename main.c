/*program to convert temperature from  Celsius to Fahrenheit*/
 #include <stdio.h>
void  main(){
 float celsius, fahrenheit;
 printf(" enter temperature in celsius:\n");
 scanf("%f",& celsius);
 fahrenheit= (celsius * 1.8)+32;
 printf("\n Equivalent fahrenheit value is %f", fahrenheit);
 getch();
}

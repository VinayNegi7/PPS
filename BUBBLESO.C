/* sugata mitra team
program for bubble sorting*/
#include<stdio.h>
#include<conio.h>
int main(){
int arr[50], num,x,y,temp;
clrscr();
printf("enter the no. of element in array");
scanf("%d",&num);
printf("enter the value of the element");
for(x=0;x<num;x++)
scanf("%d",&arr[x]);
for(x=0;x<num-1;x++){
for(y=0;y<num-x-1;y++){
if(arr[y]>arr[y+1]){
temp=arr[y];
arr[y]=arr[y+1];
arr[y+1]=temp;
}
}
}
printf(" array after implementing bubble sort:");
for(x=0;x<num;x++){
printf("%d ",arr[x]);
}
getch();
return 0;
}


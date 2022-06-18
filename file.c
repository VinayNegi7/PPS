// program to create a file and write data into file
#include <stdio.h>
#include <stdlib.h>
#define DATA_SIZE 1000

int main()
{
    char data [DATA_SIZE];
    int x;
    FILE *ptr,*ptr1,*ptr2;

    ptr=fopen("file.txt","r");
    ptr1=fopen("even.txt","w");
    ptr2=fopen("odd.txt","w");
    
    if(ptr==NULL)
    {
        printf("unable to open a file. \n");
        exit(EXIT_FAILURE);
    }
    printf("enter the contents to store in a file");
    
    fscanf(ptr,"%d",&x);
    printf("the read contents are %d \n",x);

    if((x%2)==0)
    {
        fprintf(ptr1,"even %d",x);
    }
    else{
        fputs("odd",ptr2);

    }
    fclose(ptr);
    fclose(ptr1);
    fclose(ptr2);
    printf("the file is created is created successfully");
    return 0;


}
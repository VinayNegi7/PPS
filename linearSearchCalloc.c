// linear searching using CALLOC

#include <stdio.h>
#include <stdlib.h>
int main(){
    int* ptr;
    int i,x,n;
    // for the no of elements
    printf("Enter the no of elements");
    scanf("%d",&n);
    ptr=(int*) calloc(n,sizeof(int));
    if (ptr==NULL){
        printf("Error memory not allocated");
        exit(0);
    }
    else{
        printf("Memory Successfully allocated using calloc \n");
    }
    
    // for the items in array
    printf("enter the array elements:n");
    for(i=0;i<n;i++) 
    scanf("%d",&ptr[i]);
    // Searching a specific number
    printf("enter the element to search in array");
    scanf("%d",&x);

    for(i=0;i<n;i++)
    if(ptr[i]==x)
    break;

    if(i<n)
    printf("Element found at index %d",i+1);
    else
    printf("Element not found");
    free(ptr);

    return 0;


    
}
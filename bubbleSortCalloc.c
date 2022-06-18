// bubble sorting using CALLOCS

#include<stdio.h>
int main(){
    int* ptr;
   int i,j,n,t;
   printf("enter the No: of elements in the list:\n");
   scanf("%d", &n);
    ptr=(int*)calloc(n,sizeof(int));
    if (ptr==NULL){
        printf("Error memory not allocated");
        exit(0);
    }
    else{
        printf("Memory Successfully allocated using calloc \n");
    }
   printf("enter the elements:\n");
   for(i=0; i<n; i++){
      scanf ("%d", &ptr[i]);
   }
   printf("Before bubble sorting the elements are:\n");
   for(i=0; i<n; i++)
      printf("%d \t\n", ptr[i]);
   for (i=0; i<n-1; i++){
      for (j=i+1; j<n; j++){
         if (ptr[i] > ptr[j]){
            t = ptr[i];
            ptr[i] = ptr[j];
            ptr[j] = t;
         }
      }
   }
   printf ("after bubble sorting the elements are:\n");
   for (i=0; i<n; i++)
      printf("%d\t",ptr[i]);
      return 0;

}

 #include<stdio.h>
 int main()
 {
    int n,f=1;
    scanf("%d",&n);
    for(n;n>0;n--){
       f=f*n;
    }
    printf("Factorial is %d",f);
    return 0;
}
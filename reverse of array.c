/*sugata mitra team
program for reverse of array*/
#include <stdio.h>

int main() {
    int a[5] = {1,2,3,4,5};
    int size = sizeof(a)/sizeof(a[0]);

    for (int i = size-1;i>=0;i--){
        printf("%d \n",a[i]);
    }
    return 0;
}

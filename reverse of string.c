#include <stdio.h>
#include <string.h>

int main() {
    char a[10] = "Vinay\0";
    int size = strlen(a);
    char temp[10];

    for(int i=0;i<size;i++){
        temp[i] = a[size-i-1];
    }
    printf("%s \n",temp);

    return 0;
}

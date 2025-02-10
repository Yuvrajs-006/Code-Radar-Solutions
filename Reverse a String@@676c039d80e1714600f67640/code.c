#include <stdio.h>



int main() {
    char a[100];
    scanf("%s",&a);
    int size=sizeof(a)/sizeof(a[0]);
    char b[100];
    for(int i=0;i<size;i++){
        b[i]=a[i];
    }
    printf("%s",b);
    return 0;
}
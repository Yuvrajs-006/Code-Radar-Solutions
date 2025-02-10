#include <stdio.h>



int main() {
    char a[100];
    scanf("%s",&a);
    int size=sizeof(a)/sizeof(a[0])-1;
    char b[100];
    for(int i=0;i<=size;i++){
        int c=size;
        b[i]=a[c];
        c-=1;

    }
    printf("%s",b);
    return 0;
}
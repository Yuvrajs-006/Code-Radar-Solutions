#include <stdio.h>



int main() {
    char a[100];
    scanf("%s",&a);
    int size=sizeof(a)/sizeof(a[0])-1;
    char b[100];
    int c=size;;
    for(int i=0;i<=size;i++){
        b[i]=a[c];
        c-=1;
    }
    printf("%s",b);
    return 0;
}
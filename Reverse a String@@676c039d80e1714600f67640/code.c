#include <stdio.h>



int main() {
    char a[100];
    scanf("%s",&a);
    int size=sizeof(a)/sizeof(a[0]);
    char b[100];
    int c=0;
    for(int i=size-1;i>=0;i--){
        b[c]=a[i];
        c++;
    }
    printf("%s",b);
    return 0;
}
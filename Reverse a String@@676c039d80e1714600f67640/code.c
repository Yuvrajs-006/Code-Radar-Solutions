#include <stdio.h>



int main() {
    char a[100];
    scanf("%s",&a);
    char b[100]=a[::-1];
    printf("%s",b);
    return 0;
}
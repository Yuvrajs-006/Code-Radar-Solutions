#include <stdio.h>



int main() {
    char n;
    scanf("%c",&n);
    int a=n;
    if(a>=97 && a<=122){
        printf("Lowercase");
    }
    else{
        printf("Uppercase");
    }
    return 0;
}
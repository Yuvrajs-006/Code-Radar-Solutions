#include <stdio.h>



int main() {
    char n;
    scanf("%c",&n);
    int a=n;
    if(a>=97 && a<=122){
        printf("Lowercase");
    }
    else if(a>=65 && a<=90){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}
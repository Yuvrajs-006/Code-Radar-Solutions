#include <stdio.h>



int main() {
    char n;
    scanf("%c",&n);
    if((n>='a' && n<='z') || (n>='A' && n<='Z')){
        switch(n){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("Vowel");
                break;
            default:
                printf("Consonant");
        }
    }
    else if(n>='0'&&n<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}
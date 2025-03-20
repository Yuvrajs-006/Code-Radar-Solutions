#include <stdio.h>
#include <string.h>

int main() {
    char n1[100];
    scanf("%s",n1);
    char e,t;
    scanf(" %c %c",&e,&t);
    // int size=strlen(n1);
    for(int i=0;n1[i]!='\0';i++){
        if(e==n1[i]){
            n1[i]=t;
        }
    }
    printf("%s",n1);
}
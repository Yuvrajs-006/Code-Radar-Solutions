#include <stdio.h>
#include <string.h>

int main() {
    char n1[100];
    fgets(n1, sizeof(n1), stdin);
    char e,t;
    scanf("%c%c",&e,&t);
    int size=strlen(n1);
    for(int i=0;i<size;i++){
        if(e==n1[i]){
            n1[i]=t;
        }
    }
    printf("%s",n1);
}
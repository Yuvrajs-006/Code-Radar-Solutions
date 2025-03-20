#include <stdio.h>
#include<string.h>

int main(){
    char n1[100];
    scanf("%[^\n]",n1);
    char n2[100];
    scanf("%[^\n]",n2);
    strcat(n1,n2);
    printf("%s",n1);
}
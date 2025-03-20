#include <stdio.h>
#include<string.h>

int main(){
    char n1[100];
    scanf("%s",n1);
    char n2[100];
    scanf("%s",n2);
    strcat(n1,n2);
    printf("%s",n1);
}
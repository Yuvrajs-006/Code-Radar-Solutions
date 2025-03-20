#include <stdio.h>
#include<string.h>

int main(){
    char n1[100];
    fgets(n1,100,stdin);
    char n2[100];
    fgets(n2,100,stdin);
    strcat(n1,n2);
    printf("%s",n1);
}
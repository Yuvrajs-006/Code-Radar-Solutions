// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char n1[100];
    scanf("%s",n1);
    char t;
    scanf(" %c",&t);
    char *n=strchr(n1,t);
    printf("%p",(void*)n);
}
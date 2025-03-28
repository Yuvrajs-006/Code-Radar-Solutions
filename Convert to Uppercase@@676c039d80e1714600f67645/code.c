#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main(){
    char n[100];
    fgets(n,100,stdin);
    int s=strlen(n);
    for(int i=0;i<s;i++){
        n[i]=toupper(n[i]);
    }
    printf("%s",n);
}
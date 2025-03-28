#include <stdio.h>
#include<ctype.h>
int main(){
    char n[100];
    scanf("%s",n);
    int s=strlen(n);
    for(int i=0;i<s;i++){
        n[i]=toupper(n[i]);
    }
    printf("%s",n);
}
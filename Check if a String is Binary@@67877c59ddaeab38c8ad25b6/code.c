#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char n[100];
    scanf("%s",n);
    int s=strlen(n);
    for(int i=0;i<s;i++){
        if(n[i]!='1' || n[i]!='0'){
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}
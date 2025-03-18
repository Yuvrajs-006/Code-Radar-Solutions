#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char n[100];
    scanf("%s",n);
    char v[]={'a','e','i','o','u'};
    int s=strlen(n);
    int c=0;
    for(int i=0;i<s;i++){
        char e=tolower(n[i]);
        for(int j=0;j<5;j++){
            if(e==v[j]){
                c++;
            }
        }
    }
    printf("%d",c);
}
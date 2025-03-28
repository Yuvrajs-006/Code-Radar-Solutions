#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char n[100],n1;
    scanf("%s %c",n,n1);
    int s=strlen(n);
    for(int i=0;i<s;i++){
        if(n[i]=='a'||n[i]=='e'||n[i]=='i'||n[i]=='o'||n[i]=='n'){
            n[i]=n1;
        }
    }
}
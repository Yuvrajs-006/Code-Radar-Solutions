#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char n[100],n1;
    scanf("%s %c",n,n1);
    int s=strlen(n);
    for(int i=0;i<s;i++){
        char num=tolower(n[i]);
        if(num=='a'||num=='e'||num=='i'||num=='o'||num=='n'){
            n[i]=n1;
        }
    }
}
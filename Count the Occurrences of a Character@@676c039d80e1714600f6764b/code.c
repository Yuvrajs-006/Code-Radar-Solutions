// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char n1[100];
    scanf("%s",n1);
    char t;
    scanf(" %c",&t);
    int c=0;
    for(int i=0;n1[i]!='\0';i++){
        if(n1[i]==t){
            c++;
        }
    }
    printf("%d",c);
}
#include <stdio.h>
#include <string.h>
 
int main(){
    char n[100];
    scanf("%s",n);
    char temp[100];
    int s=strlen(n);
    int index=0;
    for(int i=s-1;i>=0;i--){
        temp[index]=n[i];
        index++;
    }
    int x=strcmp(n,temp);
    if(x==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    
}
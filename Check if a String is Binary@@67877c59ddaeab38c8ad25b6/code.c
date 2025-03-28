#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char n[100];
    scanf("%s",n);
    int s=strlen(n);
    int flag=0;
    for(int i=0;i<s;i++){
        if(n[i]=='1' || n[i]=='0'){
            flag+=1;
        
        }
    }
    if(flag==s){
        printf("Yes");
    }
    else{
        printf("No");
    }
    
}
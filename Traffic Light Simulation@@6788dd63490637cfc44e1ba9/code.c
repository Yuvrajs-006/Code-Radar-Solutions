#include <stdio.h>



int main(){
    char n;
    scanf("%c",&n);
    char a[]="R";
    char b[]="Y";
    char c[]="G";
    if(n=a[0]){
        printf("Stop");
    }
    else if(n=c[0]){
        printf("Go");
    } 
    else if(n=b[0]){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}
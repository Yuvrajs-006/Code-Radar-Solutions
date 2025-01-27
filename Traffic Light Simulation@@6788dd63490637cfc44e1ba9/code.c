#include <stdio.h>



int main(){
    char n;
    scanf("%c",&n);
    char a,b,c;
    a="R";
    b="Y";
    c="G";
    if(n==a){
        printf("Stop");
    }
    else if(n==c){
        printf("Go");
    } 
    else if(n==b){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}
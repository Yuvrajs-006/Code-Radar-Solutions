#include <stdio.h>



int main(){
    char n[10];
    scanf("%s",&n);
    if(n=="R"){
        printf("Stop");
    }
    else if(n=="G"){
        printf("Go");
    } 
    else if(n=="Y"){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}
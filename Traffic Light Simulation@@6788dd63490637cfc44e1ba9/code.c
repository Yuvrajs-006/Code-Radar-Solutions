#include <stdio.h>



int main(){
    char n;
    scanf("%c",&n);
    char arr[3]={"R","Y","G"};
    if(n="R"){
        printf("Stop");
    }
    else if(n="G"){
        printf("Go");
    } 
    else if(n="Y"){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}
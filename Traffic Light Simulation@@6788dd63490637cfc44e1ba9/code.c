#include <stdio.h>



int main(){
    char n[10];
    scanf("%s",&n);
    char arr[3]={"R","Y","G"};
    if(n==arr[0]){
        printf("Stop");
    }
    else if(n==arr[2]){
        printf("Go");
    } 
    else if(n==arr[1]){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}
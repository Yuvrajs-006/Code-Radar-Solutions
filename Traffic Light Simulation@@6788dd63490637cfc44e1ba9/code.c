#include <stdio.h>



int main(){
    char n;
    scanf("%c",&n);
    char arr[3]="RYG"
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
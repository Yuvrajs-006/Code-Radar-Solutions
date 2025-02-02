#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    if(n>0 && n<=100){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
    return 0;
}
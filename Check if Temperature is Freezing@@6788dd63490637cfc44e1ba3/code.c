#include <stdio.h>



int main() {
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Freezing");
    }
    else if(n>0){
        printf("Above Freezing");
    }
}
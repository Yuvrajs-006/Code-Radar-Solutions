#include <stdio.h>


int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if(b==1 && a>=18){
        printf("Eligible");
    }
    else if(b==0 && a<18){
        printf("Not Eligible");
    }
    return 0;
}
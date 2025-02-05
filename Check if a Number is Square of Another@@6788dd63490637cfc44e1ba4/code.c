#include <stdio.h>


int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    int n=b*b;
    if(n==a){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
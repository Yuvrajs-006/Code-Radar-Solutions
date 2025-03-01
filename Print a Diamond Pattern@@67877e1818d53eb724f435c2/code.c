#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf(" "*(n-i),end="");
        printf("*"*(2*i-1));
    }
    for(int i=n;i>0;i--){
        printf(" "*(n-i),end="");
        printf("*"*(2*i-1));
    }
}
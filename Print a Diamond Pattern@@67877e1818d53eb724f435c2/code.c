#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d"," "*(n-i));
        printf("%d","*"*(2*i-1));
    }
    for(int i=n;i>0;i--){
        printf("%d"," "*(n-i));
        printf("%d","*"*(2*i-1));
    }
}
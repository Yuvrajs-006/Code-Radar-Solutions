#include <stdio.h>
 
int main(){
    int n;
    scanf("%d",&n);
    int b=0;
    while(n>0){
        int rem=n%2;
        b=(b*10)+rem;
        n/=2;

    }
    int nb=0;
    while(b>0){
        int rem=b%10;
        nb=(nb*10)+rem;
        b/=10;
    }
    printf("%d",nb);
    
    return 0;
}
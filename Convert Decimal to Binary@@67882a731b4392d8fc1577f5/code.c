#include <stdio.h>
#include <math.h>


int main() {
    int n;
    scanf("%d",&n);
    int b=0;
    int c=0;
    while(n>0){
        int rem=n%2;
        b=pow(10,c)*rem;
        n=n/2;
        c++;

    }
    printf("%d",b);
    return 0;
}
#include <stdio.h>
#include <math.h>


int main() {
    int n;
    scanf("%d",&n);
    char b[100];
    int c=0;
    while(n>0){
        int rem=n%2;
        b+=rem;
        n/=2;

    }
    printf("%s",b);
    return 0;
}
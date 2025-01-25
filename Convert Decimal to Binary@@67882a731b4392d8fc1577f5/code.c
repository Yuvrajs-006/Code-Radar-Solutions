#include <stdio.h>



int main() {
    int n;
    scanf("%d",&n);
    int b=0;
    int c=1;
    while(n>0){
        int rem=n%2;
        b=b+rem*c;
        n=n/10;
        c++;

    }
    printf("%d",b);
    return 0;
}
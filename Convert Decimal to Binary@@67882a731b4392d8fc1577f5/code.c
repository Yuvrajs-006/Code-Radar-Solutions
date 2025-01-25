#include <stdio.h>
// #include <math.h>


int main() {
    int n;
    scanf("%d",&n);
    int b=0;
    int c=0;
    while(n>0){
        int rem=n%2;
        int num=0;
        for(int i=0;i<=c;i++){
            num*=10;
        }
        b=num*rem;
        n/=2;
        c++;
    }
    printf("%d",b);
    return 0;
}
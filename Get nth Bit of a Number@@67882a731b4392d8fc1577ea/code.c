#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    int num=0;
    while(n>0){
        int rem=n%2;
        num=num*10 +rem;
        n/=2;
    }
    int bitnum[100];
    int c=0;
    while(num>0){
        int rem=num%10;
        bitnum[c]=rem;
        n/=10;
        c++;
    }
    printf("%d",bitnum[k]);
    return 0;
}
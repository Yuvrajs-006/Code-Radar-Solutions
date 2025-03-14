#include <stdio.h>
int pow(int a,int b){
    int r=1;
    for(int i=1;i<=b;i++){
        r*=a;
    }
    return r;
}
int main(){
    int n;
    scanf("%d",&n);
    int c=0;
    int b=0;
    while(n>0){
        int rem=n%2;
        b=pow(10,c)*rem;
        n/=2;
        c++;

    }
    printf("%d",b);
    
    return 0;
}
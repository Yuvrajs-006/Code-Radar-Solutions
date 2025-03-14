#include <stdio.h>
int p(int a,int b){
    int r=1;
    if(b==0){
        return 1;
    }
    else{
        for(int i=1;i<=b;i++){
            r*=a;
        }
    }
    return r;
}
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    int c=0;
    while(n>0){
        int rem=n%10;
        sum+=p(10,c)*rem;
        n/=2;
        c++;
        
    }
    printf("%d",sum);
    
    return 0;
}
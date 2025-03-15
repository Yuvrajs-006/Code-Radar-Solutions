#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&n);
    }
    for(int i=0;i<n;i++){
        int num=arr[i];
        int sum=0;
        while(num>0){
            int rem=num%10;
            sum+=rem;
            n/=10;
        }
        printf("%d ",num);
    }
}
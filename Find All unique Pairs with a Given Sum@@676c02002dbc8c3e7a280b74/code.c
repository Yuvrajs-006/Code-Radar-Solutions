#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int t;
    scanf("%d",%t);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    for(int i=0;i<n;i++){
        int num=arr[i];
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            else if(n+arr[j]==t){
                printf("%d %d",n,arr[j]);
            }
        }
    
    }
}
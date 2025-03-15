#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=arr[i+1] || arr[i]>=arr[i+1]){
            flag=1;
        }
    }
    if(flag==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
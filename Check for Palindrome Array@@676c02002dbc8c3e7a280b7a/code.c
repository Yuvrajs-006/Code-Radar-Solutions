#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr1[n];
    int p=0;
    for(int i=n-1;i>=0;i--){
        arr1[p]=arr[i];
        p++;
    }
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr1[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("NO");
    }
    else{
        printf("YES");
    }
}
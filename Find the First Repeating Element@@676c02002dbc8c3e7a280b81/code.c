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
        int num=arr[i];
        for(int j=i+1;j<n;j++){
            if(num==arr[j]){
                flag=1;
                break;
            }
        }
        if(flag==1){
            printf("%d",num);
            break;
        }
    }
    if(flag==0){
        printf("-1");
    }
}
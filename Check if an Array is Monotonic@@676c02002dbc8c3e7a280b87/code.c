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
        if(arr[0]<arr[n-1]){
            for(int i=0;i<n-1;i++){
                if(arr[i]>arr[i+1]){
                    flag=1;
                    break;
                }
            }
        }
        else{
            for(int i=0;i<n-1;i++){
                if(arr[i]<arr[i+1]){
                    flag=1;
                    break;
                }
            }  
        }

    }
    if(flag==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
 
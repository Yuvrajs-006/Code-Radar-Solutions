#include <stdio.h>



int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]<=arr[j+1]){
                flag=0;
            }
            else{
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}
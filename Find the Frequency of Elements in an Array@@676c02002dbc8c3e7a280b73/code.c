#include <stdio.h>



int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp[n];
    int c=0;
    for(int i=0;i<n;i++){
        int num=arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                continue;
            }
            else{
                temp[c]=arr[i];
                c++;
            }
        }
    }
    for(int i=0;i<c;i++){
        printf("%d ",temp[i]);
    }
    return 0;
}
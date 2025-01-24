#include <stdio.h>



int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr1[n];
    int index=0;
    for(int i=0;i<n;i++){
        int n1=arr[i];
        int c=0;
        for(int j=i+1;j<n;j++){
            if(arr[j]==n1){
                c++;
            }
        }
        arr[index]=c;
        index++;
    }
    printf("%d",arr[1]);
}




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
    int arr2[n];
    for(int i=0;i<n;i++){
        arr2[i]=arr1[i];
    }
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(arr2[j]<arr2[j+1]){
				int temp=arr2[j];
				arr2[j]=arr2[j+1];
				arr2[j+1]=temp;
			}
		}
    }
    int n2=arr2[0];
    for(int i=0;i<n;i++){
        if(arr1[i]==n2){
            printf("%d",arr1[i]);

        }
    }
    // printf("%d",n2);
}




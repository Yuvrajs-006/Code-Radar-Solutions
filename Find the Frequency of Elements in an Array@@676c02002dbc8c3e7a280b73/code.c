#include <stdio.h>



int main(){
	int s;
	scanf("%d",&s);
	int arr[s];
	for(int i=0;i<s;i++){
		scanf("%d",&arr[i]);
	}
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp =arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int arr1[]=arr[];

}
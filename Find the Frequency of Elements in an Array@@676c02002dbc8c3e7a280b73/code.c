#include <stdio.h>



int main(){
	int s;
	scanf("%d",&s);
	int arr[s];
	for(int i=0;i<s;i++){
		scanf("%d",&arr[i]);
	}
    for(int i=0;i<s;i++){
        for(int j=0;j<s-i;j++){
            if(arr[j]>arr[j+1]){
                int temp =arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int index=0;
    int arr1[index];
    for(int i=0;i<s;i++){
        if(arr1[index]==arr[i]){
            continue;
        }
        else{
            arr1[index]=arr[i];
            index++;
        }
    }
    for(int i=0;i<index;i++){
        printf("%d",arr1[i]);
    }
}
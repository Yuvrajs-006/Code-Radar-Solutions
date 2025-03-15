#include <stdio.h>



int main(){
	int s;
	scanf("%d",&s);
	int arr[s];
	for(int i=0;i<s;i++){
		scanf("%d",&arr[i]);
	}
    for(int i=0;i<s;i++){
        for(int j=0;j<s-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp =arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<s;i++){
        printf("%d ",arr[i]);
    }
}
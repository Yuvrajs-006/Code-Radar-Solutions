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
				int temp =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	int arr1[s];
	int c=0;
	if(s%2==0){
		for(int i=0;i<s;i++){
			if(arr[i]!=arr[i+1]){
				arr1[c]=arr[i];
				c++;
			}
		}
	}
	else{
		for(int i=0;i<s;i++){
			if(i==s-1){
				arr1[c]=arr[i];
				c++;
			}
			if(arr[i]==arr[i+1]){
				arr1[c]=arr[i];
				c++;
			}
		}
	}
	for(int i=0;i<c;i++){
		int num=arr1[i];
		int count =0;
		for(int j=0;j<s;j++){
			if(arr[j]==num){
				count++;
			}
		}
		printf("%d %d\n",num,count);
		count =0;
	}
}
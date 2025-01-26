#include <stdio.h>






int main(){
    int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int arr1[n];
	int c=0;
	if(s%2==0){
		for(int i=0;i<n;i++){
			if(arr[i]!=arr[i+1]){
				arr1[c]=arr[i];
				c++;
			}
		}
	}
	else{
		for(int i=0;i<n;i++){
			if(i==n-1){
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
        for(int j=0;j<n;j++){
            if(arr[j]==num){
                count++;
            }
        }
        printf("%d %d\n",num,count);
        count=0;
    }




	return 0;
}
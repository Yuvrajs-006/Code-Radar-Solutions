#include <stdio.h>



int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int c=0;
	for(int i=1;i<n;i++){
		if(arr[c]!=i){
			printf("%d",i);
			break;
		}
		c++;
	}
    return 0;
}




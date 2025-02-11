#include <stdio.h>
#include <string.h>
int main(){
	char a[100];
    fgets(a,sizeof(a),stdin);
	char b[100];
	int c=strlen(a);
    for(int i=c-1;i>=0;i--){
        printf("%c",a[i]);
    }

}
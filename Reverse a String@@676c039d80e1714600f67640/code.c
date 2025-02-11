#include <stdio.h>
#include <string.h>
int main(){
	char a[100];
    fgets(a,sizeof(a),stdin);
	char b[100];
	int c=strlen(a)-1;
	int x=0;
	for(int i=c;i>=0;i--){
		b[x]=a[i];
		x++;
		
	}
	printf("%s",b);
}
#include <stdio.h>
int main(){
	int a,b;
	char n;
	scanf("%d%d",&a,&b);
	scanf("%c",&n);
    if(n=='+'){
        printf("%d",a+b);
    }
}
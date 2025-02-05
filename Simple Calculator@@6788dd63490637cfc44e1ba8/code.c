#include <stdio.h>
#include <string.h>


int main(){
	int a,b;
	char n[100];
	scanf("%d%d",&a,&b);
	scanf("%s",n);
	switch(n){
		case '+':
			printf("%d",a+b);
			break;
		case '-':
			printf("%d",a-b);
			break;
		case '*':
			printf("%d",a*b);
			break;
		case '/':
			printf("%d",a/b);
			break;
		case '%':
			printf("%d",a%b);
			break;
		default:
			printf("invalid operator");
			break;
	}
}
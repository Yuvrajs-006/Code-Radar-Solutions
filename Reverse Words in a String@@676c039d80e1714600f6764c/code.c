#include <stdio.h>
#include <string.h>

int main(){
    char n1[100];
    fgets(n1,sizeof(n1),stdin);
    n1[strcspn(n1, "\n")] = '\0';
    char *t=strtok(n1," ");
    while(t!=NULL){
        char n2[100];
        strcpy(n2,t);
        char n3[100];
        int index=0;
        for(int i=strlen(n2)-1;i>=0;i--){
            n3[index++]=n2[i];
        }
        printf("%s ",n3);

    }
}
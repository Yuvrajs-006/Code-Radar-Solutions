#include <stdio.h>
#include <string.h>

int main() {
    char n1[100];
    fgets(n1,sizeof(n1),stdin);
    int n[100];
    int sizes=strlen(n1)
    for(int i=0;i<sizes;i++){
        char c=n1[i];
        int count =0;
        for(int j=0;i<sizes;j++){
            if(c==n1[j]){
                count++;
            }
        }
        n[i]=count;
    }
    int s=sizeof(n)/sizeof(n[0]);
    int max=n[0]
    int c1[100];
    int index=0;
    for(int i=0;i<s;i++){
        if(max<n[i]){
            max=n[i];
        }
    }
    int count2=0;
    for(int i=0;i<s;i++){
        if(n[i]==max){
            c1[index++]=i;
        }
    }   
    int sizec=sizeof(c1)/sizeof(c1[0]);
    int min=c1[0];
    for(int i=0;i<sizec;i++){
        int numb=c1[i]
        if(min>n1[numb]){
            min=n1[numb];
        }
    }
    printf("%c",min)
    
    return 0;
}

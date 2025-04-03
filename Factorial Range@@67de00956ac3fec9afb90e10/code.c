// Your code here...
int factorialRange(int s,int e){
    if(s>e || s<0 || e<0){
        printf("Invalid range");
        return 0;
    }
    for(int i=s;i<=e;i++){
        int num=i;
        int  f=1;
        for(int j=1;j<=num;j++){
            f*=j;
        }
        printf("%d\n",f);
    }
    return 0;

}
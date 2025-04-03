// Your code here...
void factorialRange(int s,int e){
    int f=1;
    if(start>end || start<0 || end<0){
        printf("Invalid range");
        return 0;
    }
    for(int i=s;i<=e;i++){
        f*=i;
    }
    printf("%d",f);
    return 0;

}
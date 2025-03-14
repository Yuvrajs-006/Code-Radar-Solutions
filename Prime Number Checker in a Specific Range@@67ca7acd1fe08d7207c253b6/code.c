void printPrimesInRange(int a,int b){
    int c=0;
    for(int i=a;i<=b;i++){
        int flag=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d ",i);
            c++;
        }
    }
    if(c==0){
        printf("No prime numbers");
    }
}
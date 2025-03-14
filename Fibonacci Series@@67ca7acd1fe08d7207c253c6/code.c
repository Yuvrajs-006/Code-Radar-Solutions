void fibonacciSeries(int n){
    int a=0;
    int b=1;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        int sum=a+b;
        a=b;
        b=sum;
    }
}
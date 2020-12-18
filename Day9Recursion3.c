int factorial(int n) {
    scanf("%d",&n);
        if(n<=1){
            return 1;
        }
        if(n>1){
            return n*factorial(n-1);}    
    return factorial(n);
}

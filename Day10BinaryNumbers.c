    int main(){
    int n;
    scanf("%d",&n);
    int rem = 0;
    int curr = 0;
    int max = 0;
    while(n > 0) {
        rem = n % 2;
        if(rem == 1) {
            curr++;
            if(curr >= max) {
                max = curr;
            }
        } else {
            curr = 0;
        }
        n = n / 2;
    }

    printf("%d\n", max);}
    return 0;}

// User function Template for C

int factorial(int n) {
    // code here
    int mult= 1;
    for(int i= 1; i<=n; i++){
        mult= mult * i;
    }
    return mult;
}
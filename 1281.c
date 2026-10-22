int subtractProductAndSum(int n) {
    int digit, sum, product;
    sum = 0;
    product = 1;
    while(n>0){
        digit = n % 10;
        product = product * digit;
        sum = sum + digit;
        n /= 10;
    }
    return product - sum;
}


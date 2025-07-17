#include <stdio.h>

int gcd(int a, int b){
    while(b){
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

int isCoPrime(int a, int b){
    return gcd(a,b) == 1;
}

int reverseNumber(int n){
    int r = 0;
    while(n){
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}

int main() {
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        int r = reverseNumber(n);
        printf(isCoPrime(n,r) ? "YES\n" : "NO\n");
    }
}
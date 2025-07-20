#include <stdio.h>

int isPrime(int n){
    if(n < 2) return 0;
    if(n == 2) return 1;
    if(n%2==0) return 0;
    for(int i = 3; i*i <= n; i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int isDigitSumPrime(int n){
    int s = 0;
    while(n){
        int d = n % 10; n /= 10; s += d;
        if(d != 2 && d != 3 && d != 5 && d != 7) return 0;
    }
    return (isPrime(s));
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int a,b,cnt = 0;
        scanf("%d %d",&a,&b);
        for(int i = a; i <= b; i++){
            if(isDigitSumPrime(i) && isPrime(i)) cnt++;
        }
        printf("%d\n",cnt);
    }
}
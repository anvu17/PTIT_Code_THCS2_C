#include <stdio.h>

int isPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i*i <= n; i++) if(n%i==0) return 0;
    return 1;
}

int isAllDigitsPrime(int n){
    while(n > 0){
        int d = n % 10;
        if(d != 2 && d != 3 && d !=5 && d != 7) return 0;
        n/=10;
    }
    return 1;
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int a,b; scanf("%d %d",&a,&b);
        int cnt = 0;
        for(int i = a; i <= b; i++){
            if(isAllDigitsPrime(i) && isPrime(i)) cnt++;
        }
        printf("%d\n",cnt);
    }
}
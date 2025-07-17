#include <stdio.h>

long long fibo[92];

void generateFibo(){
    fibo[0] = 0; fibo[1] = 1;
    for(int i = 2; i < 92; i++) fibo[i] = fibo[i-1] + fibo[i-2];
}

int isFibo(long long n){
    for(int i = 0; i < 92; i++) if(fibo[i]==n) return 1;
    return 0;
}

int main(){
    int t; scanf("%d",&t);
    generateFibo();
    while(t--){
        long long n; scanf("%lld",&n);
        printf(isFibo(n) ? "YES\n" : "NO\n");
    }
}
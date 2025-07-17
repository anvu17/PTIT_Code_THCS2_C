#include <stdio.h>

#define MAX 2000000

int spf[MAX + 1];

void sieve_spf(){
    for(int i = 1; i <= MAX; i++) spf[i] = i;
    for(int i = 2; i*i <= MAX; i++){
        if(spf[i] == i){
            for(int j = i * i; j <= MAX; j += i){
                if(spf[j] == j) spf[j] = i;
            }
        }
    }
}

int calc(int n){
    int s = 0;
    while(n != 1){
        s += spf[n];
        n /= spf[n];
    }
    return s;
}

int main(){
    sieve_spf();
    int t; scanf("%d",&t);
    long long s = 0;
    while(t--){
        int n; scanf("%d",&n);
        s+=calc(n);
    }
    printf("%lld",s);
}
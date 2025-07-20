#include <stdio.h>

long long gpf(long long n){
    long long r = 0;
    for(long long i = 2; i*i <= n; i++){
        while(n%i==0){
            r=i;
            n/=i;
        }
    }
    if(n > 1) r = n;
    return r;
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        long long n; scanf("%lld",&n);
        printf("%lld\n",gpf(n));
    }
}
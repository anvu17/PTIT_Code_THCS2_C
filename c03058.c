#include <stdio.h>

long long gcd(long long a, long long b){
    while(b){
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

long long lcm(long long a, long long b){
    return a*b/gcd(a,b);
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        long long res = 1;
        for(int i = 2; i <= n; i++) res = lcm(res, i);
        printf("%lld\n",res);
    }
}
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
        int n,m; scanf("%d%d",&n,&m);
        long long tmp = 1;
        for(int i = n; i <= m; i++) tmp = lcm(tmp, i);
        printf("%lld\n",tmp);
    }
}
#include <stdio.h>

long long gcd(long long a, long long b){
    while(b){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

long long lcm(long long a, long long b){
    // BSCNN(a,b) = (a*b)/UCLN(a,b);
    return (a*b)/gcd(a,b);
}

int main(){
    long long a,b; scanf("%lld %lld",&a,&b);
    printf("%lld\n%lld",gcd(a,b),lcm(a,b));
}
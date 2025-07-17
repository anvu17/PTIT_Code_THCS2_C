#include <stdio.h>

int isPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i*i <= n; i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int gcd(int a, int b){
    while(b){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int digitSum(int n){
    int s = 0;
    while(n){
        s+=n%10;
        n/=10;
    }
    return s;
}

int main()
{
    int t; scanf("%d",&t);
    while(t--){
        int a,b; scanf("%d %d",&a,&b);
        if(isPrime(digitSum(gcd(a,b)))) printf("YES\n");
        else printf("NO\n");
    }
}
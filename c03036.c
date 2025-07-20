#include <stdio.h>

int check(long long n){
    long long o=n,r=0;
    int s=0;
    while(n){
        int d=n%10;
        if(d%2==0) return 0;
        s+=d;
        r=r*10+d;
        n/=10;
    }
    return o==r && s%2!=0;
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        long long n; scanf("%lld",&n);
        if(check(n)) printf("YES\n");
        else printf("NO\n");
    }
}
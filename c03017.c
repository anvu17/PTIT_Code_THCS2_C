#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        long long n; scanf("%lld",&n);
        long long o=n,r=0;
        while(n){
            r=r*10+(n%10);
            n/=10;
        }
        if(o==r) printf("YES\n");
        else printf("NO\n");
    }
}
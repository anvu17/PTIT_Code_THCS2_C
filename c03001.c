#include <stdio.h>

int isDivisiblebyTen(int n){
    int s = 0;
    while(n){
        s+=n%10;
        n/=10;
    }
    if(s%10==0) return 1;
    return 0;
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        if(isDivisiblebyTen(n)) printf("YES\n");
        else printf("NO\n");
    }
}
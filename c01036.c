#include <stdio.h>

int main(){
    int n; scanf("%d",&n);
    int o = n, s = 1;
    while(n){
        s *= n%10;
        n /= 10;
    }
    printf("%lld",s);
}
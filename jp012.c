#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b; scanf("%d %d",&a,&b);
        long long fibo[93];
        fibo[0] = 1;
        fibo[1] = 1;
        for(int i = 2; i <= b; i++) fibo[i] = fibo[i-1] + fibo[i-2];
        for(int i = a; i <= b; i++) printf("%lld ",fibo[i-1]);
        printf("\n");
    }
}
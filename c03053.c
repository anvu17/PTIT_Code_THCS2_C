#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define RANGE 10000

bool prime[RANGE + 1];

void sieve(){
    memset(prime,true,sizeof(prime));
    prime[0] = prime[1] = false;

    for(int i = 2; i * i <= RANGE; i++){
        if(prime[i]){
            for(int j = i * i; j <= RANGE; j += i) prime[j] = false;
        }
    }
}

int main(){
    sieve();
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        for(int i = 2; i <= n/2; i++){
            if(prime[i] && prime[n-i]) printf("%d %d ",i,n-i);
        }
        printf("\n");
    }
}
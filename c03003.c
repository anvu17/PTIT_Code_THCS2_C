#include <stdio.h>

int isPrime(int n){
    if(n<2) return 0;
    for(int i = 2; i*i <= n; i++) if(n%i==0) return 0;
    return 1;
}

int main(){
    int n, cnt = 0, i = 2; scanf("%d",&n);
    while(cnt < n){
        if(isPrime(i)){
            printf("%d\n",i);
            cnt++;
            i++;
        }
        else i++;
    }
}
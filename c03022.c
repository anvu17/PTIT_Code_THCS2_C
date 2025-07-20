#include <stdio.h>

int isDivisiblebyFive(int n){
    int s = 0;
    while(n){
        int d=n%10;
        s+=d;
        n/=10;
    }
    if(s%5==0) return 1;
    return 0;
}

int isPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i*i <= n; i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    int cnt = 0;
    int n; scanf("%d",&n);
    for(int i = 2; i < n; i++){
        if(isDivisiblebyFive(i) && isPrime(i)){
            printf("%d ",i);
            cnt++;
        }
    }
    printf("\n%d",cnt);
}
#include <stdio.h>

int isPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i*i <= n; i++){
        if(n%i==0) return 0;
    }
    return 1;
}

long long fibo[92];

void generateFibo(){
    fibo[0] = 0; fibo[1] = 1;
    for(int i = 2; i < 92; i++) fibo[i] = fibo[i-1] + fibo[i-2];
}

int isFiboSum(long long n){
    int s = 0;
    while(n){
        s+=n%10;
        n/=10;
    }
    for(int i = 0; i < 92; i++) if(fibo[i]==s) return 1;
    return 0;
}

int main(){
    int a,b; scanf("%d%d",&a,&b);
    generateFibo();  
    if(a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    for(int i = a; i <= b; i++) if(isPrime(i) && isFiboSum(i)) printf("%d ",i);    
}
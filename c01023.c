#include <stdio.h>

int maxDigit(long long n){
    int max = 0;
    while(n){
        if(max < n%10) max = n%10;
        n/=10;
    }
    return max;
}

int minDigit(long long n){
    int min = 9;
    while(n){
        if(min > n%10) min = n%10;
        n=n/10;
    }
    return min;
}

int main()
{
    int t; scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        printf("%d %d\n",maxDigit(n),minDigit(n));
    }
}
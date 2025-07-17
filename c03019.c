#include <stdio.h>
#include <math.h>

int isDivisibleBy10(int n){
    int s = 0;
    while(n){
        int d = n % 10;
        s += d;
        n/=10;
    }
    return (s%10==0);
}

int isPalindrome(int n){
    int o = n, r = 0;
    while(n){
        int d = n % 10;
        r = r*10 + d;
        n/=10;
    }
    if(o == r) return 1;
    return 0;
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        int start = pow(10,n-1), end = start * 10, cnt = 0;
        for(int i = start; i < end; i++){
            if(isDivisibleby10(i) && isPalindrome(i)) cnt++;
        }
        printf("%d\n",cnt);
    }
}
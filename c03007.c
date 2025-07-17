#include <stdio.h>

int isPalindrome(int n){
    int r = 0, o = n;
    while(n != 0){
        int tmp = n % 10;
        r = r * 10 + tmp;
        n /= 10;
    }
    if(o == r) return 1;
    return 0;
}

int isPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0) return 0;
    }
    return 1;
}

int main(){
    int t; scanf("%d",&t);
    for(int i = 1; i <= t; i++){
        int a,b; scanf("%d%d",&a,&b);
        int cnt = 0;
        for(int i = a; i <= b; i++){
            if(isPalindrome(i) && isPrime(i)){
                printf("%d ",i);
                cnt++;
                if(cnt % 10 == 0) printf("\n");
            }
        }
        printf("\n\n");
    }
}
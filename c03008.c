#include <stdio.h>

int isPerfectNumber(int n){
    int s = 1; // 1 luôn là ước
    // Nếu i là ước của n thì n/i cũng là ước.
    for(int i = 2; i*i <= n; i++){
        if(n%i==0){ 
            s+=i;
            if(i!=n/i) s+=n/i;
        }
    }
    return s==n && n!=1;
}

int main(){
    int n; scanf("%d",&n);
    for(int i = 1; i < n; i++) if(isPerfectNumber(i)) printf("%d ",i);
}
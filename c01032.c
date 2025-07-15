#include <stdio.h>
#include <math.h>

int main(){
    int t; scanf("%d",&t);
    // Nhân các thừa số nguyên tố KHÁC NHAU
    while(t--){
        int n;
        long long p = 1;
        scanf("%d",&n);
        for(int i = 2; i*i <= n;i++){
            while(n%i==0){
                p*=i;
                n/=i;
                while(n % i == 0) n/=i; // bỏ các thừa số trùng
            }
        }
        if(n>1) p*=n;

        printf("%lld\n",p);
    }
}

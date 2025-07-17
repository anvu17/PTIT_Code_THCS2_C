#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n,p,x = 0; scanf("%d %d",&n,&p);

        /*
        Tính số x lớn nhất để n! chia hết cho p^x: 
        Công thức Legendre: 
        x = floor(n/p) + floor(n/p^2) + floor(n/p^3) + ...
        (cho tới khi p^k > n) 
        */

       long long pow = p; // pow = p^k
       while(pow <= n){
            x += n/pow; // cộng floor(n/p^k)
            pow *= p; // tăng lên p^(k+1) 
       }

       printf("%d\n",x);
        
    }
}
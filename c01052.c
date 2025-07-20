/*
    Ý tưởng:
        Một ước số i của n luôn có một ước khác là n/i.
        ( i * (n/i) = n )
    do đó:
        Chỉ cần duyệt i từ 1 đến sqrt(n) để xét đủ các cặp ước (i, n/i).
*/

#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n, ans = 0; scanf("%d",&n);
        for(int i = 1; i*i <= n; i++){
            if(n%i==0){
                if(i%2==0) ++ans;
                if(i!=n/i && (n/i)%2==0) ++ans;
            }
        }
        printf("%d\n",ans);
    }
}
#include <stdio.h>
#include <math.h>

// Số thỏa mãn: thuận nghịch, tổng chữ số chia hết 10, không chứa 4
int check(int n){
    int o = n, r = 0, s = 0;
    while(n){
        int d = n%10;
        if(d==4) return 0;
        s+=d;
        r=r*10+d;
        n/=10;
    }
    return(o==r && s%10==0);
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        int start = pow(10, n - 1), end = start*10;
        for(int i = start; i < end; i++) if(check(i)) printf("%d ",i);
        printf("\n");
    }
}
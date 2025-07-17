#include <stdio.h>

int gcd(int a, int b){
    while(b){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        int a[n], b[n+1];
        for(int i = 0; i < n; i++) scanf("%d",&a[i]);
        b[0] = a[0];
        b[n] = a[n - 1];
        for(int i = 1; i < n; i++){
            int g = gcd(a[i-1],a[i]);
            b[i] = a[i-1]*a[i]/g; // LCM
        }
        for(int i = 0; i <= n; i++) printf("%d ",b[i]);
        printf("\n");
    }
}
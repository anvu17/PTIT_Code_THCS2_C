#include <stdio.h>

int isPrime(int n){
    if(n<2) return 0;
    for(int i = 2; i*i <= n; i++) if(n%i==0) return 0;
    return 1;
}

int main(){
    int n,ans = 0,max = 0; scanf("%d",&n); int a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) scanf("%d",&a[i][j]);
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++) if(isPrime(a[i][j])) cnt++;
        if(cnt > max){
            max = cnt;
            ans = i;
        }
    }
    printf("%d\n",ans+1);
    for(int j = 0; j < n; j++) if(isPrime(a[ans][j])) printf("%d ",a[ans][j]);
}
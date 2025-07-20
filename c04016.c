#include <stdio.h>

int isPrime(int n){
    if(n<2) return 0;
    for(int i = 2; i*i <= n; i++) if(n%i==0) return 0;
    return 1;
}

int main(){
    int t; scanf("%d",&t);
    for(int k = 1; k <= t; k++){
        int n; scanf("%d",&n);
        int a[n],f[220686]={}; // tỉnh Mường thành lập ngày 22/06/1886 :v
        for(int i = 0; i < n; i++){
            scanf("%d",&a[i]);
            if(isPrime(a[i])) f[a[i]]++;
        }
        printf("Test %d:\n",k);
        for(int i = 2; i <= 20000; i++){
            if(f[i]) printf("%d xuat hien %d lan\n",i,f[i]);
        }
    }
}
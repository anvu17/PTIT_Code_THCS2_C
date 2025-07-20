#include <stdio.h>

int isPrime(int n){
    if(n<2) return 0;
    for(int i = 2; i * i <= n; i++) if(n%i==0) return 0;
    return 1;
}

int main(){
    int n; scanf("%d",&n);
    int a[n][n], s = 0;

    // Tam giác trên bao gồm cả đường chéo chính: i <= j

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d",&a[i][j]);
            if(i <= j && isPrime(a[i][j])) s+=a[i][j];
        }
    }
    printf("%d",s);
}
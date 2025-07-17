#include <stdio.h>

int isPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0) return 0;
    }
    return 1;
}

int prime[400];

void generatePrime(){
    int i = 0, cnt = 0;
    while(cnt < 400){
        if(isPrime(i)){
            prime[cnt] = i;
            cnt++;
        }
        i++;
    }
}

int main(){
    generatePrime();
    int t; scanf("%d",&t);
    for(int k = 1; k <= t; k++){
        int n; scanf("%d",&n);
        int a[n][n], cnt = 0;

        int r1 = 0, r2 = n - 1, c1 = 0, c2 = n - 1;

        while(r1 <= r2 && c1 <= c2){
            for(int i = c1; i <= c2; i++){
                a[r1][i] = prime[cnt];
                cnt++;
            }
            r1++;

            for(int i = r1; i <= r2; i++){
                a[i][c2] = prime[cnt];
                cnt++;
            }
            c2--;

            if(c1 <= c2){
                for(int i = c2; i >= c1; i--){
                    a[r2][i] = prime[cnt];
                    cnt++;
                }
                r2--;
            }

            if(r1 <= r2){
                for(int i = r2; i >= r1; i--){
                    a[i][c1] = prime[cnt];
                    cnt++;
                }
                c1++;
            }
        }

        printf("Test %d:\n",k);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++) printf("%d ",a[i][j]);
            printf("\n");
        }
    }
}
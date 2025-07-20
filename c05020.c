#include <stdio.h>

long long fibo[81];

void generateFibo(){
    fibo[0] = 0; fibo[1] = 1;
    for(int i = 2; i < 81; i++) fibo[i] = fibo[i - 1] + fibo[i - 2];
}

int main(){
    generateFibo();
    int n; scanf("%d",&n);
    long long a[n][n], cnt = 0;

    int r1 = 0, r2 = n - 1, c1 = 0, c2 = n - 1;

    while(r1 <= r2 && c1 <= c2){
        for(int i = c1; i <= c2; i++){
            a[r1][i] = fibo[cnt];
            cnt++;
        }
        r1++;

        for(int i = r1; i <= r2; i++){
            a[i][c2] = fibo[cnt];
            cnt++;
        }
        c2--;

        if(c1 <= c2){
            for(int i = c2; i >= c1; i--){
                a[r2][i] = fibo[cnt];
                cnt++;
            }
            r2--;
        }

        if(r1 <= r2){
            for(int i = r2; i >= r1; i--){
                a[i][c1] = fibo[cnt];
                cnt++;
            }
            c1++;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) printf("%lld ",a[i][j]);
        printf("\n");
    }
}
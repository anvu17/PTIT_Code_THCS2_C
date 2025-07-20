#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    for(int k = 1; k <= t; k++){
        int n; scanf("%d",&n);
        int a[n][n], cnt = n * n;

        int r1 = 0, r2 = n - 1, c1 = 0, c2 = n - 1;

        while(r1 <= r2 && c1 <= c2){
            for(int i = c1; i <= c2; i++){
                a[r1][i] = cnt;
                cnt--;
            }
            r1++;


            for(int i = r1; i <= r2; i++){
                a[i][c2] = cnt;
                cnt--;
            }
            c2--;

            if(c1 <= c2){
                for(int i = c2; i >= c1; i--){
                    a[r2][i] = cnt;
                    cnt--;
                }
                r2--;
            }

            if(r1 <= r2){
                for(int i = r2; i >= r1; i--){
                    a[i][c1] = cnt;
                    cnt--;
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
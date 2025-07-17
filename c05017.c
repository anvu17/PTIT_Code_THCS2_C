#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n,m; scanf("%d%d",&n,&m);
        int a[n][m];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++) scanf("%d",&a[i][j]);
        }

        int r1 = 0, r2 = n - 1, c1 = 0, c2 = m - 1;

        while(r1 <= r2 && c1 <= c2){
            for(int i = c1; i <= c2; i++){
                printf("%d ",a[r1][i]);
            }
            r1++;

            for(int i = r1; i <= r2; i++){
                printf("%d ",a[i][c2]);
            }
            c2--;

            if(r1 <= r2){
                for(int i = c2; i >= c1; i--){
                    printf("%d ",a[r2][i]);
                }
                r2--;
            }

            if(c1 <= c2){
                for(int i = r2; i >= r1; i--){
                    printf("%d ",a[i][c1]);
                }
                c1++;
            }
        }

        printf("\n");
    }

}
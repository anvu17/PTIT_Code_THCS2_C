#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    for(int z = 1; z <= t; z++){
        int n,m; scanf("%d %d",&n,&m);
        int a[n][m],r[n][n];
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++) scanf("%d",&a[i][j]);
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                r[i][j] = 0;
                for(int k = 0; k < m; k++) r[i][j] += a[i][k]*a[j][k];
            }
        }

        printf("Test %d:\n",z);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++) printf("%d ",r[i][j]);
            printf("\n");
        }
    }
}

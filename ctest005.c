#include <stdio.h>

int main(){
    int n,m,p; scanf("%d %d %d",&n,&m,&p);
    // a (n x m); b (m x p);
    int a[n][m], b[m][p], c[n][p];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) scanf("%d",&a[i][j]);
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++) scanf("%d",&b[i][j]);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            // c[i][j]: Từng phần tử hàng i của ma trận a nhân với
            // từng phần tử hàng j của ma trận 2.
            // Cộng dồn lại (sau m phép tính) ra được c[i][j].
            // Ví dụ c[0][0] = a[0][0]*b[0][0] + a[0][1]*b[1][0]+a[0][2]*b[2][0]
            c[i][j] = 0;
            for(int k = 0; k < m; k++) c[i][j] += a[i][k]*b[k][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++) printf("%d ",c[i][j]);
        printf("\n");
    }
}
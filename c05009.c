#include <stdio.h>

int main(){
    int m; scanf("%d",&m); int a[m][m];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++) scanf("%d",&a[i][j]);
    }

    // Các phần tử trên đường chéo chính ở hàng thứ i: a[i][i];
    // trên đường chéo phụ: a[i][m-i-1]

    for(int i = 0; i < m; i++){
       int tmp = a[i][i];
       a[i][i] = a[i][m - i - 1];
       a[i][m - 1 - i] = tmp;
       for(int j = 0; j < m; j++) printf("%d ",a[i][j]);
       printf("\n");
    }
}

#include <stdio.h>

int main(){
    int m,n; scanf("%d %d",&m,&n);
    int a[m][n];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++) scanf("%d",&a[i][j]);
    }

    int c1,c2; scanf("%d %d",&c1,&c2); c1--; c2--; // Số thứ tự bắt đầu từ 1

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(j == c1){
                printf("%d ",a[i][c2]);
            }
            else if(j == c2){
                printf("%d ",a[i][c1]);
            }
            else{
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
}
#include <stdio.h>

int main(){
    int m,n; scanf("%d %d",&m,&n);
    int a[m][n];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++) scanf("%d",&a[i][j]);
    }

    int h1,h2; scanf("%d %d",&h1,&h2); h1--; h2--; // Số thứ tự bắt đầu từ 1

    for(int i = 0; i < m; i++){
        if(i == h1){
            for(int j = 0; j < n; j++) printf("%d ",a[h2][j]);
        }
        else if(i == h2){
            for(int j = 0; j < n; j++) printf("%d ",a[h1][j]);
        }
        else{
            for(int j = 0; j < n; j++) printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
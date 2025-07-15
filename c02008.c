#include <stdio.h>

int main(){
    int n; scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        // Dòng i có i dấu * ở hai đầu, i-2 dấu . ở giữa
        for(int j = 0; j < i; j++){
            if(j == 0 || j == (i-1) || i == n) printf("*");
            else printf(".");
        }
        printf("\n");
    }
}
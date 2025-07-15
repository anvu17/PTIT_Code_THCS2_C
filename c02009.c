#include <stdio.h>

int main(){
    int n; scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        // Dòng i có n - i dấu ~, i dấu *
        for(int a = 0; a < n - i; a++) printf("~");
        for(int j = 0; j < i; j++) printf("*");
        printf("\n");
    }
}
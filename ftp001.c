#include <stdio.h>

int main(){
    int n; scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        for(int a = 1; a <= i; a++) printf("0 ");
        for(int j = 1; j <= n-i; j++) printf("%d ",j);
        printf("\n");
    }
}
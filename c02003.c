#include <stdio.h>

int main(){
    int n; scanf("%d",&n);
    for(int r = 0; r < n; r++){
        for(int c = 0; c < n; c++){
            if(r == 0 || c == 0 || r == (n-1) || c == (n-1)) printf("*");
            else printf(".");
        }
        printf("\n");
    }
}
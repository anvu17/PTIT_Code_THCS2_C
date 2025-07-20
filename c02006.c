#include <stdio.h>

int main(){
    int r,c; scanf("%d %d",&r,&c);
    for(int i = 0; i < r; i++){
        for(int a = 0; a < i; a++) printf("~");
        for(int b = 0; b < c; b++){
            if(b == 0 || b == (c - 1) || i == 0 || i == (r - 1)) printf("*");
            else printf(".");
        }
        printf("\n");
    }
}

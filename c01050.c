#include <stdio.h>

int main(){
    int w,h; scanf("%d %d",&w,&h);

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(i==0 || i == h - 1 || j == 0 || j == w - 1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }

}
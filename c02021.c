#include <stdio.h>

int main(){
    int h; scanf("%d",&h);
    for(int i = 1; i <= h; i++){
        int tmp = i;
        for(int j = 1; j <= i; j++){
            printf("%d ",tmp);
            tmp += h - j;
        }
        printf("\n");
    }
}
#include <stdio.h>

int main(){
    int h; scanf("%d",&h);
    for(int i = 0; i < h; i++){
        for(int a = 1; a <= (h - i - 1); a++) printf("~");
        for(int a = 1; a <= (2 * i + 1); a+=2) printf("%d",a);
        for(int a = (2 * i - 1); a >= 1; a-=2) printf("%d",a);
        printf("\n");
    }
}
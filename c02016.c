#include <stdio.h>

int main(){
    int h; scanf("%d",&h);
    for(int i = 1; i <= h; i++){
        for(int j = 0; j < i; j++){
            int value;
            if(i % 2 != 0) value = 2 * j + 1;
            else value = 2 * j + 2;
            printf("%d",value);
        }
        printf("\n");
    }
}
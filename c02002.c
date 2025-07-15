#include <stdio.h>

int main(){
    int n; scanf("%d",&n);
    for(int i = 0; i < n; i++){
        // trong mỗi dòng, in n - i - 1 dấu ~
        for(int j = 0; j < n - i - 1; j++) printf("~");
        // tiếp theo in n dấu *
        for(int j = 0; j < n; j++) printf("*");
        printf("\n");
    }
}
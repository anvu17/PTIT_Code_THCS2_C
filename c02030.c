#include <stdio.h>

int main(){
    int h; scanf("%d",&h);
    for(int i = 0; i < h; i++){
        printf("@");
        for(int j = 0; j < i; j++) printf("%c",'B'+2*j);
        for(int j = i - 2; j >= 0; j--) printf("%c",'B'+2*j);
        if(i) printf("@");
        printf("\n");
    }
}
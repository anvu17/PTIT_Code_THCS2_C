#include <stdio.h>

int main(){
    int n; scanf("%d",&n);
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++) printf("%c",'A'+2*j);
        printf("\n");
    }
}
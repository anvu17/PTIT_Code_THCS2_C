#include <stdio.h>

int main(){
    int r,c; scanf("%d %d",&r,&c);

    if(r<=c){
        for(int i = 1; i <= r; i++){
                for(int a = i; a <= c; a++){
                    printf("%d",a);
                }
                for(int b = i - 1; b > 0; b--){
                    printf("%d",b);
                }
        printf("\n");
        }
    }
    else{
        int k = 0;

        for(int i = 0; i < c; i++){
            for(int j = k; j < c; j++){
                printf("%d", j + 1);
            }
            for(int j = k - 1; j >= 0; j--){
                printf("%d", j + 1);
            }
            k++;
            printf("\n");
        }

        for(int i = c; i < r; i++){
            printf("%d", i + 1);
            for(int j = c - 1; j > 0; j--){
                printf("%d", j);
            }
            printf("\n");
        }    
    }

}
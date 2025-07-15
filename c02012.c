#include <stdio.h>

int main(){
    int r,c; scanf("%d %d",&r,&c);
    for(int k = 1; k <= r; k++){
        if(k <= c){
            for(int m = k; m >= 1; m--) printf("%d",m);
            for(int n = 2; n <= c - k + 1; n++) printf("%d",n);
            printf("\n");
        }
        else{
            for(int o = k; o >= k - c + 1; o--) printf("%d",o);
            printf("\n");
        }
    }
}

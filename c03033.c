#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    for(int i = 1; i <= t; i++){
        int n, first = 1; scanf("%d",&n);
        printf("%d = ",n);
        for(int j = 2; j*j <= n; j++){
            int power = 0;
            while(n%j==0){
                power+=1;
                n/=j;
            }
            if(power > 0){
                if(!first) printf(" * ");
                printf("%d^%d",j,power);
                first = 0;
            }
        }
        if(n > 1){
            if(!first) printf(" * ");
            printf("%d^1",n);
        }
        printf("\n");
    }
}
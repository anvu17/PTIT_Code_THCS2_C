#include <stdio.h>

int check(int n){
    int o = n, r = 0;
    while(n){
        int d = n%10;
        if(d==9) return 0;
        r = r*10 + d;
        n/=10;
    }
    return o==r;
}


int main(){
    int n, cnt = 0; scanf("%d",&n);
    for(int i = 2; i < n; i++){
        if(check(i)){
            printf("%d ",i); cnt++;
        }
    }
    printf("\n%d",cnt);
}

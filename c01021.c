#include <stdio.h>

int main(){
    int n; scanf("%d",&n);
    int o = n, s = 0;
    while(n){
        s += n%10;
        n /= 10;
    }
    printf("%d",s);
}
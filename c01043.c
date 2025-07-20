#include <stdio.h>

int main(){
    int n; scanf("%d", &n);
    int o = n, s = 0;
    while(n){
        int r = n % 10;
        n = n / 10;
        int f = 1;
        for(int i = 1; i <= r; i++) f = f * i;
        s = s + f;
    }
    if(s == o) printf("1");
    else printf("0");
}

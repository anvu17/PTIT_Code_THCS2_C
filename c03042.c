#include <stdio.h>

int isDecreasing(int n){
    int prev = -1;
    while(n){
        int d = n % 10;
        if(d <= prev) return 0;
        prev = d;
        n /= 10;
    }
    return 1;
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int a,b,cnt = 0; scanf("%d %d",&a,&b);
        for(int i = a; i <= b; i++) if(isDecreasing(i)) cnt++;
        printf("%d\n",cnt);
    }
}
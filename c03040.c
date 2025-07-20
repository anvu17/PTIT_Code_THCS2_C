#include <stdio.h>

int tongCS(int n){
    int s = 0;
    while(n){
        int d = n%10;
        s+=d;
        n/=10;
    }
    return s;
}

int tongNT(int n){
    int s = 0;
    for(int i = 2; i*i <= n; i++){
        while(n%i==0){
            s+=tongCS(i);
            n/=i;
        }
    }
    if(n > 1) s+=tongCS(n);
    return s;
}

int main(){
    int n; scanf("%d",&n);
    if(tongCS(n) == tongNT(n)) printf("YES");
    else printf("NO");
}
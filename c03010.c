#include <stdio.h>

int factorial[10];
void calcFact(){
    factorial[0] = 1;
    for(int i = 1; i < 9; i++) factorial[i] = factorial[i - 1] * i;
}

int isStrongNumber(int n){
    int s = 0, tmp = n;
    while(tmp > 0){
        int d = tmp % 10;
        s+=factorial[d];
        tmp/=10;
    }
    return s==n;
}

int main(){
    int n; scanf("%d",&n);
    calcFact();
    for(int i = 1; i < n; i++) if(isStrongNumber(i)) printf("%d ",i);
}
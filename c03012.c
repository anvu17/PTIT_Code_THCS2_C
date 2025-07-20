#include <stdio.h>

int isFibo(int n){
    int f1=1,f2=1;
    if(n==1) return 1;
    while(1){
        int f=f1+f2;
        if(f==n) return 1;
        if(f>n) return 0;
        f1=f2; f2=f;
    }
}

int main(){
    int n; scanf("%d",&n);
    printf("%d",isFibo(n));
}
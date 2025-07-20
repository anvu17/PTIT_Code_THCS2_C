#include <stdio.h>

int check(int n){
    int o=n,r=0,s=0,has6=0;
    while(n){
        int d=n%10;
        if(d==6) has6=1;
        s+=d;
        r=r*10+d;
        n/=10;
    }
    return r==o && has6 && s%10==8;
}

int main(){
    int a,b; scanf("%d %d",&a,&b);
    if(a>b){int tmp = a; a = b; b = tmp;}
    for(int i = a; i <= b; i++) if(check(i)) printf("%d ",i);
}
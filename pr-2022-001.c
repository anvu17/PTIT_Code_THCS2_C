#include <stdio.h>

int main(){
    int u0,d,n,s = 0; scanf("%d%d%d",&u0,&d,&n);
    for(int i = 0; i < n; i++) s+=u0+i*d;
    printf("%d",s);
}
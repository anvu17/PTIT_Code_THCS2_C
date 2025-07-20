#include <stdio.h>

int main(){
    int a,b,tmp,s=0; scanf("%d %d",&a,&b);

    // Đảo lại vị trí a, b khi a > b:
    if(a > b){
        tmp = a;
        a = b;
        b = tmp;
    }

    for(int i = a; i <= b; i++) s+=i;

    printf("%d",s);
}
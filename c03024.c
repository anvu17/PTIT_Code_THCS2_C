#include <stdio.h>

int digitSum(int n){
    int s = 0;
    while(n){
        int d = n%10;
        s+=d;
        n/=10;
    }
    return s;
}

int main(){
    int a,b; scanf("%d %d",&a,&b);
    int sa = digitSum(a), sb = digitSum(b);
    if(sa > sb) printf("%d %d",b,a);
    else printf("%d %d",a,b);
}
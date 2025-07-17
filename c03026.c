#include <stdio.h>

int isPalindrome(int n){
    int o=n,r=0;
    while(n){
        r=r*10+n%10;
        n/=10;
    }
    return o==r;
}

int main(){
    int a,b; scanf("%d%d",&a,&b);
    if(isPalindrome(a)!=isPalindrome(b)) printf("YES");
    else printf("NO");
}
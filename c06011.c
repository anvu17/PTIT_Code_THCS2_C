#include <stdio.h>
#include <string.h>

int check(char *n){
    int l = 0, r = strlen(n) - 1, s=0;
    while(l<r){
        if(n[0]!='8' || n[l]!=n[r]) return 0;
        s+=(n[l]-'0')*2;
        l++; r--;
    }
    if(l==r) s+=(n[l]-'0');
    return s%10==0;
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        char n[502]; scanf("%s",n);
        printf(check(n) ? "YES\n" : "NO\n");
    }
}
#include <stdio.h>
#include <string.h>

int utl(char *n){
    int len = strlen(n), oCnt = 0, eCnt = 0;
    if(!(n[len-1]%2)) return 0;
    for(int i = 0; i < len; i++){
        if(n[i]%2) oCnt++;
        else eCnt++;
    }
    return eCnt<oCnt;
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        char n[20]; scanf("%s",n);
        printf(utl(n) ? "YES\n" : "NO\n");
    }
}
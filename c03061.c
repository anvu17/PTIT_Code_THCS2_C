#include <stdio.h>
#include <string.h>

int check(char *n){
    int len = strlen(n);
    int a = n[0]-'0', b = n[len-1]-'0';
    if(!(a==2*b || b==2*a)) return 0;
    for(int i = 1; i < len-1-i; i++)
        if(n[i] != n[len-1-i]) return 0;
    return 1;
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        char n[20]; scanf("%s",n);
        printf(check(n) ? "YES\n" : "NO\n");
    }
}
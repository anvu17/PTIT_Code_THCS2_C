#include <stdio.h>
#include <string.h>

int check(char *n){
    int len = strlen(n);
    if((n[len-1]-'0')%2) return 0;
    for(int i = 0; i < len; i++)
        if((n[i]-'0')%2) return 0;
    return 1;
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        char n[20]; scanf("%s",n);
        if(check(n)) printf("YES\n"); else printf("NO\n");
    }
}
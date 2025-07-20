#include <stdio.h>
#include <ctype.h>
#include <string.h>

int check(char *n){
    int len = strlen(n);
    if(n[0]=='0') return -1;
    for(int i = 0; i < len; i++) if(!isdigit(n[i])) return -1;
    int mark[10]={},cnt=0;
    for(int i = 0; i < len; i++){
        int x = n[i] - '0';
        if(!mark[x]){
            mark[x]=1;
            if(++cnt==10) break;
        }
    }
    return cnt==10;
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        char n[1002]; scanf("%s",n);
        int r = check(n);
        if(r==-1) printf("INVALID\n");
        else if(r) printf("YES\n");
        else printf("NO\n");
    }
}

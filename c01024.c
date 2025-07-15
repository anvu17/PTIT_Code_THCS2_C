#include <stdio.h>
#include <string.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        char n[10]; scanf("%s",n);
        if(n[0]==n[strlen(n) - 1]) printf("YES\n");
        else printf("NO\n");
    }
}
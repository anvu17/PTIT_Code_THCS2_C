#include <stdio.h>
#include <string.h>

int check(char s[]){
    int diff = 0;
    int l = 0, r = strlen(s) - 1;
    while(l<=r){
        if(s[l] != s[r]) diff++;
        l++; r--;
    }
    if((strlen(s)%2 == 1 && diff <= 1) || (strlen(s)%2 == 0 && diff == 1)) return 1;
    return 0; 
}

int main(){
    int t; scanf("%d",&t); getchar();
    while(t--){
        char s[22]; scanf("%s",s);
        if(check(s)) printf("YES\n");
        else printf("NO\n");
    }
}
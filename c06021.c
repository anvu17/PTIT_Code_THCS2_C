#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        char n[1002]; scanf("%s",n);
        int len = strlen(n),e=0,o=0;
        if(n[0]=='0'){
            printf("INVALID\n");
            continue;
        }
        int ok = 1;
        for(int i = 0; i < len; i++){
            if(!isdigit(n[i])){
                ok = 0;
                break;
            }
            int d = n[i]-'0';
            if(d%2==0) e++;
            else o++;
        }
        if(!ok) printf("INVALID\n");
        else if(len%2==0 && e>o || len%2==1 && o>e) printf("YES\n");
        else printf("NO\n");
    }
}
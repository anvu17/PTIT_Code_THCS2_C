#include <stdio.h>

int main(){
    int t; scanf("%d",&t); getchar();
    while(t--){
        int e = 0, o = 0, cnt = 0, x;
        char c;
        while(1){
            scanf("%d%c",&x,&c);
            if(x%2==0) e++;
            else o++;
            cnt++;
            if(c=='\n') break;
        }
        if(cnt%2==0 && e>o || cnt%2==1 && o>e) printf("YES\n");
        else printf("NO\n");
    }
}
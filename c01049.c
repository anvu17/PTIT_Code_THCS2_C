#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        int o=0,e=0;
        while(n){
            int d = n%10;
            n=n/10;
            if(d%2==0) e++;
            else o++;
        }
        printf("%d %d\n",o,e);
    }
}

#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n,x,cnt=0,max=0; scanf("%d",&n);
        while(n--){
            scanf("%d",&x);
            if(x>max){
                cnt++;
                max = x;
            }
        }
        printf("%d\n",cnt);
    }
}
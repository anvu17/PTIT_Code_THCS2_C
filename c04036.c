#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    int d[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    while(t--){
        int n, cnt = 0; scanf("%d",&n);
        for(int i = 0; i < 10; i++){
            cnt+=n/d[i];
            n%=d[i];
        }
        printf("%d\n",cnt);
    }
}
#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n,cnt = 0; scanf("%d",&n);
        for(int i = 1; i*i <= n; i++){
            if(n%i==0){
                if(i%2==0) cnt++;
                if(i!=n/i && (n/i)%2==0) cnt++;
            }
        }
        printf("%d\n",cnt);
    }
}
#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    for(int i = 1; i <= t; i++){
        int n; scanf("%d",&n);
        printf("Test %d: ",i);
        for(int j = 2; j*j <= n; j++){
            int cnt = 0;
            while(n%j==0){
                cnt+=1;
                n/=j;
            }
            if(cnt > 0) printf("%d(%d) ",j,cnt);
        }
        if(n > 1) printf("%d(1)",n);
        printf("\n");
    }
}

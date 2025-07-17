#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n,x; scanf("%d",&n);
        while(n--){
            scanf("%d",&x);
            if(x%2==0) printf("%d ",x);
        }
        printf("\n");
    }
}
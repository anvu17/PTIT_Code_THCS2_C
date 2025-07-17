#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n, cnt = 0; scanf("%d",&n);
        int a[n];
        for(int i = 0; i < n; i++) scanf("%d",&a[i]);
        for(int i = 0; i < n; i++)
            if(a[i]==a[i+1]) cnt++;
        printf("%d\n",cnt);
    }
}

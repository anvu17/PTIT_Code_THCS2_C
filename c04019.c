#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n); int a[n];
        int freq[30001] = {}, max = 0;
        for(int i = 0; i < n; i++){
            scanf("%d",&a[i]);
            if(++freq[a[i]] > max) max = freq[a[i]];
        }
        for(int i = 0; i < n; i++){
            if(freq[a[i]] == max){
                printf("%d ",a[i]);
                freq[a[i]] = -1;
            }
        }
        printf("\n");
    }
}
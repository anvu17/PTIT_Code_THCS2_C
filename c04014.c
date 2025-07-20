#include <stdio.h>

int cnt[192888];

int main(){
    int n; scanf("%d",&n); int a[n];
    for(int i = 0; i < n; i++) scanf("%d",&a[i]);

    for(int i = 0; i < n; i++) cnt[a[i]]++;

    for(int i = 0; i < n; i++){
        if(cnt[a[i]]!=0){
            printf("%d %d\n",a[i],cnt[a[i]]);
            cnt[a[i]]=0;
        }
    }
}
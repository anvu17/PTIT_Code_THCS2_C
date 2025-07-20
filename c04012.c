#include <stdio.h>

int main(){
    int n; scanf("%d",&n);
    int a[n],cnt[151728]={},found=0;
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
        cnt[a[i]]++;
    }
    for(int i = 0; i < n; i++){
        if(cnt[a[i]]>1){
            printf("%d ",a[i]);
            cnt[a[i]]=0;
            found=1;
        }
    }
    if(!found) printf("0");
}
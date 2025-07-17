#include <stdio.h>

int main(){
    int n; scanf("%d",&n);
    int a[n],f[190845]={},res[n],cnt=0;
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
        f[a[i]]++;
    }
    for(int i = 0; i < n; i++){
        if(f[a[i]]>1){
            res[cnt++]=a[i];
            f[a[i]]=0;
        }
    }
    printf("%d\n",cnt);
    for(int i = 0; i < cnt; i++) printf("%d ",res[i]);
}
#include <stdio.h>

int main(){
    int n; scanf("%d",&n); int a[n],e[n],o[n];
    int eCnt=0,oCnt=0;
    for(int i = 0; i < n; i++) scanf("%d",&a[i]);
    for(int i = 0; i < n; i++){
        if(a[i]%2==0) e[eCnt++] = a[i];
        else o[oCnt++] = a[i];
    }
    for(int i = 0; i < eCnt; i++) printf("%d ",e[i]);
    printf("\n");
    for(int i = 0; i < oCnt; i++) printf("%d ",o[i]);
}
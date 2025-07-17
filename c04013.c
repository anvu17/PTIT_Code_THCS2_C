#include <stdio.h>

int main(){
    int n,a[n],f[201]={}; scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
        f[a[i]+100]++;
    }
    int cnt=0;
    for(int i = 0; i < n; i++)
        if(f[a[i]+100]==1) cnt++;
    printf("%d\n",cnt);
    for(int i = 0; i < n; i++)
        if(f[a[i]+100]==1) printf("%d ",a[i]);
}
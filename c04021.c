#include <stdio.h>

int main(){
    int n,m; scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++) scanf("%d",&a[i]);
    int p; scanf("%d",&p);
    for(int i = n - p; i < n; i++) printf("%d ",a[i]);
    for(int i = 0; i < n - p; i++) printf("%d ",a[i]);
}
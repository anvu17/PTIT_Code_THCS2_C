#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    for(int i = 1; i <= t; i++){
        int n,m,p; scanf("%d%d%d",&n,&m,&p);
        int a[n],b[m];
        for(int j = 0; j < n; j++) scanf("%d",&a[j]);
        for(int j = 0; j < m; j++) scanf("%d",&b[j]);
        printf("Test %d:\n",i);
        for(int j = 0; j < p; j++) printf("%d ",a[j]);
        for(int j = 0; j < m; j++) printf("%d ",b[j]);
        for(int j = p; j < n; j++) printf("%d ",a[j]);
        printf("\n");
    }
}
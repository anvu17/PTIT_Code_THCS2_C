#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int isIn(int x, int a[], int n){
    for(int i = 0; i < n; i++) if(a[i] == x) return 1;
    return 0;
}

int main(){
    int n,m; scanf("%d %d",&n,&m);
    int a[n],b[m];
    for(int i = 0; i < n; i++) scanf("%d",&a[i]);
    for(int i = 0; i < m; i++) scanf("%d",&b[i]);

    qsort(a, n, sizeof(int), cmp);
    qsort(b, m, sizeof(int), cmp);

    // Tập giao:
    for(int i = 0; i < n; i++){
        if(i > 0 && a[i] == a[i - 1]) continue;
        if(isIn(a[i],b,m)) printf("%d ",a[i]);
    }
    printf("\n");

    // Tập A\B:
    for(int i = 0; i < n; i++){
        if(i > 0 && a[i] == a[i - 1]) continue;
        if(!isIn(a[i],b,m)) printf("%d ",a[i]);
    }
    printf("\n");

    // Tập B\A:
    for(int i = 0; i < m; i++){
        if(i > 0 && b[i] == b[i - 1]) continue;
        if(!isIn(b[i],a,m)) printf("%d ",b[i]);
    }
    printf("\n");
}
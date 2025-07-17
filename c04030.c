#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
} // sắp xếp tăng


int main(){
    int t; scanf("%d",&t);
    for(int k = 1; k <= t; k++){
        int n; scanf("%d",&n);
        int a[n],b[n],r[n*2];

        for(int i = 0; i < n; i++) scanf("%d",&a[i]);
        for(int i = 0; i < n; i++) scanf("%d",&b[i]);

        qsort(a,n,sizeof(int),cmp);
        qsort(b,n,sizeof(int),cmp);

        for(int i = 0; i < n; i++){
            r[i*2] = a[i];
            r[i*2+1] = b[n - 1 - i];
        }

        printf("Test %d:\n",k);
        for(int i = 0; i < n*2; i++) printf("%d ",r[i]);
        printf("\n");
    }
}

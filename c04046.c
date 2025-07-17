#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        int a[n];
        for(int i = 0; i < n; i++) scanf("%d",&a[i]);

        qsort(a,n,sizeof(int),cmp);

        int cnt = 0, min = 1e9;
        for(int i = 1; i < n; i++){
            int d = a[i] - a[i-1];
            if(d < min) min = d, cnt = 1;
            else if(d == min) cnt++;
        }

        printf("%d %d\n",min,cnt);
    }
}

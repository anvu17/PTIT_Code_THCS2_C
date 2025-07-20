#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int m,n; scanf("%d %d",&m,&n); int a[m], b[n], ab[m+n];
        char c; scanf(" %c",&c);
        for(int i = 0; i < m; i++) scanf("%d",&a[i]);
        for(int i = 0; i < n; i++) scanf("%d",&b[i]);
        // T: tăng, G: giảm, F: a trước b, A: b trước a;
        if(c == 'F'){
            for(int i = 0; i < m; i++) printf("%d ",a[i]);
            for(int i = 0; i < n; i++) printf("%d ",b[i]);
        }
        else if(c == 'A'){
            for(int i = 0; i < n; i++) printf("%d ",b[i]);
            for(int i = 0; i < m; i++) printf("%d ",a[i]);
        }
        else{
            for(int i = 0; i < m; i++) ab[i] = a[i];
            for(int i = 0; i < n; i++) ab[m+i] = b[i];
            qsort(ab,m+n,sizeof(int),cmp);
            if(c == 'T') for(int i = 0; i < m + n; i++) printf("%d ",ab[i]);
            else for(int i = m + n - 1; i >= 0; i--) printf("%d ",ab[i]);
        }
        printf("\n");
    }
}
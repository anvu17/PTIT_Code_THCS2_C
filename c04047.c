#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int t,d;
} guest;

int cmp(const void *a, const void *b){
    guest *x = (guest*)a;
    guest *y = (guest*)b;
    return x->t - y->t;
}

int main(){
    int n; scanf("%d",&n);
    guest g[100];
    for(int i = 0; i < n; i++)
        scanf("%d%d",&g[i].t,&g[i].d);

    qsort(g,n,sizeof(guest),cmp);

    int now = 0;
    for(int i = 0; i < n; i++){
        if(g[i].t > now) now = g[i].t;
        now+=g[i].d;
    }

    printf("%d", now);
}

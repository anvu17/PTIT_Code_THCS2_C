#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int val;
    int cnt;
} num;

num a[100000];
int n;

int isNonDecreasing(int n){
    int prev = 10;
    while(n){
        int d = n % 10;
        if(prev < d) return 0;
        prev = d;
        n /= 10;
    }
    return 1;
}

int find(int x){
    for(int i = 0; i < n; i++){
        if(a[i].val == x) return i;
    }
    return -1;
}

// sắp xếp giảm dần theo cnt, nếu bằng thì tăng dần theo val
int cmp(const void *a, const void *b){
    num *n1 = (num*)a;
    num *n2 = (num*)b;
    if(n1->cnt != n2->cnt) return n2->cnt - n1->cnt;
    return n1->val - n2->val;
}

int main(){
    int x;
    while(scanf("%d",&x) == 1){
        if(!isNonDecreasing(x)) continue;
        int pos = find(x);
        if(pos == -1){
            a[n].val = x;
            a[n].cnt = 1;
            n++;
        }
        else a[pos].cnt++;
    }

    qsort(a,n,sizeof(num),cmp);

    for(int i = 0; i < n; i++) printf("%d %d\n",a[i].val,a[i].cnt);

}
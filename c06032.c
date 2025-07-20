#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    char ab[21], ba[21];
    strcpy(ab, (char *)a); strcat(ab, (char *)b);
    strcpy(ba, (char *)b); strcat(ba, (char *)a);
    return strcmp(ab, ba);
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int m; scanf("%d ",&m);
        char a[m][11];
        for(int i = 0; i < m; i++) scanf("%s",a[i]);
        qsort(a,m,sizeof(a[0]),cmp);
        for(int i = 0; i < m; i++) printf("%s",a[i]);
        printf("\n");
    }
}
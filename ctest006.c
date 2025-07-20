#include <stdio.h>

int primecheck(int a){
    if(a<2) return 0;
    for(int i = 2; i*i <= a; i++){
        if(a%i==0) return 0;
    }
    return 1;
}

int main(){
    int n,m; scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) scanf("%d",&a[i][j]);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) printf("%d ",primecheck(a[i][j]));
        printf("\n");
    }
}
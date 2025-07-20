#include <stdio.h>
#include <math.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int x; scanf("%d",&x);
        int root = sqrt(x);
        if(root*root==x) printf("YES\n");
        else printf("NO\n");
    }
}
#include <stdio.h>
#include <string.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        char n[19]; scanf("%s",n);
        int isNonDecreasing = 1, len = strlen(n);
        for(int i = 0; i < len - 1; i++){
            if(n[i]>n[i+1]){
                isNonDecreasing = 0;
                break;
            }
        }
        if(isNonDecreasing) printf("YES\n"); else printf("NO\n");
    }
}
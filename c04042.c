#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);

        int found = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]==a[j]){
                    printf("%d\n",a[i]);
                    found = 1;
                    goto end_loop;
                }
            }
        }
        
        end_loop:
        if(!found) printf("NO\n");
    }
}

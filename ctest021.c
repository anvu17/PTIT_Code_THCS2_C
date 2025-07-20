    #include <stdio.h>
    #include <stdlib.h>

    #define RANGE 1000

    int prime[RANGE+1] = {1};

    void sieve(){
        for(int i = 2; i <= RANGE; i++) prime[i] = 1;
        prime[0] = prime[1] = 0;

        for(int i = 0; i*i <= RANGE; i++){
            if(prime[i]){
                // Loại tất cả các bội của i
                for(int j = i*i; j <= RANGE;j+=i) prime[j] = 0;
            }
        }
    }

    int cmp(const void *a, const void *b){
        return *(int*)a - *(int*)b;
    }

    int main(){
        sieve();
        int t; scanf("%d",&t);
        while(t--){
            int n; scanf("%d",&n); int a[n];
            for(int i = 0; i < n; i++) scanf("%d",&a[i]);

            int res[n], cnt = 0;

            for(int i = 0; i < n; i++){
                if(prime[a[i]]) res[cnt++] = a[i];
            }

            qsort(res,cnt,sizeof(int),cmp);

            int prev = -1;
            for(int i = 0; i < cnt; i++){
                if(res[i] != prev){
                    printf("%d ",res[i]);
                    prev = res[i];
                }
            }
            
            printf("\n");
        }
    }
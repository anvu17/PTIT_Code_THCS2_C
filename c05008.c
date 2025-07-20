#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    for(int k = 1; k <= t; k++){
        int n,m; scanf("%d %d",&n,&m);
        int a[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++) scanf("%d",&a[i][j]);
        }

        int hang_max = -1, cot_max = -1, max = 0, sum = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++) sum+=a[i][j];
            if(sum>max){ 
                max = sum;
                hang_max = i;
            }
            sum = 0;
        }

        max = 0;

        for(int j = 0; j < m; j++){
            for(int i = 0; i < n; i++){
                if(i!=hang_max){
                    sum+=a[i][j];
                }
            }
            if(sum>max){ 
                max = sum;
                cot_max = j;
            }
            sum = 0;
        }

        printf("Test %d:\n",k);

        for(int i = 0; i < n; i++){
            if(i!=hang_max){
                for(int j = 0; j < m; j++) if(j!=cot_max) printf("%d ",a[i][j]);
                printf("\n");
            }
        }

    }
}

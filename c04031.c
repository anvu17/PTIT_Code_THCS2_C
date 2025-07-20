#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    for(int k = 1; k <= t; k++){
        int n; scanf("%d",&n); int a[n];
        for(int i = 0; i < n; i++) scanf("%d",&a[i]);

        int max = 1, len = 1, cnt = 0, start[n];
        /*
        - max: độ dài đoạn tăng dài nhất
        - len: độ dài đoạn tăng hiện tại
        - cnt: số đoạn tăng dài nhất
        - start[]: vị trí bắt đầu các đoạn tăng dài nhất
        */

       for(int i = 1; i < n; i++){
            if(a[i] > a[i - 1]) len++;
            else len = 1;

            if(len > max){
                max = len;
                start[0] = i - len + 1;
                cnt = 1;
            }
            else if(len == max){
                start[cnt++] = i - len + 1;
            }
       }

       printf("Test %d:\n%d\n",k,max);
       for(int i = 0; i < cnt; i++){
            int s = start[i];
            for(int j = 0; j < max; j++) printf("%d ",a[s+j]); // in từ a[s] đến a[s + max - 1]
            printf("\n");
       }

    }
}
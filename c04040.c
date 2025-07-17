#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n, x; scanf("%d",&n);

        /*
        Ý tưởng thuật toán Kadane: 
            - Đọc từng phần tử
            - s: tổng dãy con kết thúc tại phần tử hiện tại
            - Nếu s > 0, bỏ đoạn trước đó, bắt đầu lại từ x
            - ans: tổng dãy lớn nhất đã gặp
        */

       long long s = 0, ans = -1e9;

       for(int i = 0; i < n; i++){  
            scanf("%d",&x);
            s = s < 0 ? x : s + x;
            if(s > ans) ans = s;
       }

       printf("%lld\n",ans);

    }
}
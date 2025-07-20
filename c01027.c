#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int a,b; scanf("%d %d",&a,&b);

        if(a==b){
            printf("%d\n",a);
            continue;
        }

        if(a==0 || b==0){
            printf("%d\n",a+b);
            continue;
        }

        // Có thể bỏ hai điều kiện trên đi vì chạy thuật toán Euclid cũng sẽ vẫn trả ra kết quả đúng.

        while(a!=0){ // hoặc viết là while(a) cho gọn cũng được
            int tmp = a;
            a = b % a;
            b = tmp;
        }

        printf("%d\n",b);

    }
}
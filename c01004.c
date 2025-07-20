#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        double n; // không dùng int: trong C phép chia 2 số nguyên luôn cho kết quả là số nguyên 
        // hay cũng không dùng float: chỉ chính xác đến 6-7 chữ số thập phân
        scanf("%lf",&n);
        printf("%.15lf\n",1/n);
    }
}
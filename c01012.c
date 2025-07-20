#include <stdio.h>

int main(){
    long long n, max = 0;
    // Đọc cho đến hết luồng dữ liệu đầu vào:
    while(scanf("%lld",&n)==1) if(n>max) max=n;
    printf("%lld",max);
}
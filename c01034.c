/*
TÌM CÁC SỐ CHÍNH PHƯƠNG TRONG ĐOẠN [m,n]:
    - Số chính phương là bình phương của một số nguyên.
    - Để liệt kê các số chính phương trong [m,n]:
        + Tìm các số nguyên i sao cho i^2 thuộc [m,n].
        + Với mỗi i đó, in ra i^2.
*/

#include <stdio.h>
#include <math.h>

int main(){
    int m,n; scanf("%d %d",&m,&n);

    int a = ceil(sqrt(m));
    int b = floor(sqrt(n));
/*  ^^^^^^^^^^^^^^^^^^^^^^
Giải thích qua ví dụ: m = 10, n = 50:
có:
    sqrt(10) ≈ 3.16
        ta thấy rằng nếu làm tròn xuống 3: 3^2 = 9 < 10 (không thỏa mãn);
        vậy ta phải làm tròn lên 4: 4^2 = 16 >= 10 (số chính phương nhỏ nhất thỏa mãn).
    sqrt(50) ≈ 7.07
        ta thấy rằng nếu làm tròn lên 8: 8^2 = 64 > 50 (không thỏa mãn);
        vậy ta phải làm tròn xuống 7: 7^2 = 49 <= 50 (số chính phương cuối cùng thỏa mãn).
*/
    printf("%d\n",b-a+1); // số lượng số chính phương thỏa mãn
    for(int i = a; i <= b; i++) printf("%d\n",i*i); // in ra các số chính phương thỏa mãn
}

/*
DI CHUYỂN TRÊN ĐƯỜNG THẲNG (symmetrical stepping pattern): 
    - Di chuyển từ x đến y trên trục số (0 ≤ x ≤ y < 2^31)
    - Mỗi bước là số nguyên dương.
    - Độ dài giữa hai bước liên tiếp không chênh nhau quá 1 đơn vị.
    - Bước đầu và bước cuối có độ dài là 1.
    => Tìm số bước đi tối thiểu.

Hướng tiếp cận: 
    Bước đi tối ưu nhất có dạng đối xứng: 1 -> 2 -> ... -> k -> ... -> 2 -> 1, khi ấy tổng quãng đường là k^2 với số bước là 2k - 1.
    Gọi d = |y - x|,
    k = (int)sqrt(d) => k^2 <= d < (k+1)^2
    Sau đó xét:
        TH1) d = k^2 => 2k - 1 bước: 
            Dạng đối xứng. Coi đây là dạng chuẩn.
        TH2) k^2 < d <= k^2 + k => 2k bước:
            Dạng đối xứng chỉ đi được k^2, phần thiếu = d - k^2,
            tức còn thiếu tối đa k đơn vị. Vậy chỉ cần thêm 1 bước k.
        TH3) d > k^2 + k => 2k + 1 bước:
            Phần thiếu = d - k^2 > k mà d < (k + 1)^2 = k^2 + 2k + 1 => phần thiếu < 2k + 1 đơn vị
            tức k < phần thiếu < 2k + 1. Vậy cần thêm 2 bước k.
*/

#include <stdio.h>
#include <math.h>

int steps(int x, int y){
    int d = abs(y - x);
    if(d == 0) return 0;

    int k = (int)sqrt(d);

    if(d == k*k) return 2*k - 1;
    if(d <= k*k+k) return 2*k;
    return 2*k + 1;
}

int main(){
    int x,y;
    while(scanf("%d %d",&x,&y)==2) printf("%d\n",steps(x,y));
}
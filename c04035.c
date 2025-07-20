/*
LEO NÚI:
    Tóm tắt đề bài:
        - Có n người leo lên và xuống một ngọn núi.
        - Mỗi người i:
            + Mất u[i] thời gian leo lên.
            + Mất d[i] thời gian leo xuống.
        - Tại mỗi thời điểm:
            + Tối đa 1 người leo lên.
            + Tối đa 1 người leo xuống.
            + Những người khác có thể chờ trên đỉnh.
        - Thứ tự đi xuống có thể khác thứ tự đi lên.
    Yêu cầu: Tìm thời gian tối thiểu để tất cả lên và xuống.
    Áp dụng thuật toán Johnson (Johnson's rule) để giải bài toán này.

    -----------------------------------------------
    Thuật toán Johnson dùng để sắp xếp thứ tự các công việc cần thực hiện
    qua hai công đoạn liên tiếp sao cho tổng thời gian hoàn tất chúng
    là nhỏ nhất.
    
    Bài toán:
        - Có n công việc,
        mỗi công việc phải được xử lý qua 2 máy.
        - Mỗi công việc gồm 2 giai đoạn:
            + Giai đoạn 1: xử lý ở máy 1 -> thời gian a[i]
            + Giai đoạn 2: xử lý ở máy 2 -> thời gian b[i]
        - Mỗi máy chỉ xử lý được 1 công việc tại 1 thời điểm.
        - Mỗi công việc phải được xử lý ở máy 1 trước khi được xử lý ở máy 2.
        - Thứ tự làm ở máy 1 có thể khác thứ tự làm ở máy 2.

    Các bước thực hiện:
        Bước 1: Chia công việc thành hai nhóm:
            + Nhóm A: công việc có a[i] <= b[i] -> làm trước
            (vì máy 1 xử lý nhanh, làm trước sẽ không chiếm máy 1 lâu,
            khi ấy máy 2 phải chờ ít hơn -> tiết kiệm thời gian chờ)
            + Nhóm B: công việc có a[i] > b[i] -> làm sau
            (vì nếu làm trước sẽ chiếm máy 1 lâu, khiến máy 2 phải chờ nhiều hơn)
        Bước 2: Sắp xếp công việc trong từng nhóm:
            + Nhóm A: sắp xếp tăng dần theo a(i) -> việc gì làm nhanh ở máy 1 thì làm trước
            + Nhóm B: sắp xếp giảm dần theo b(i) -> việc gì làm lâu ở máy 2 thì làm trước
        Bước 3: Nối để tìm được lịch trình tối ưu: (Nhóm A) + (Nhóm B)
    -----------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

int u[25001], d[25001], id[25001];

int cmp(const void *x, const void *y){
    int i=*(int*)x, j=*(int*)y;
    // Cả hai thuộc nhóm A: u <= d -> sắp tăng theo u[i]: ai lên nhanh hơn thì xếp trước
    if(u[i] <= d[i] && u[j] <= d[j]) return u[i] - u[j];
    // Cả hai thuộc nhóm B: u > d -> sắp giảm theo d[i]: ai xuống lâu hơn thì xếp trước
    if(u[i] > d[i] && u[j] > d[j]) return d[j] - d[i];
    // Một người thuộc nhóm A, một người thuộc nhóm B -> người nhóm A xếp trước
    return (u[i] <= d[i]) ? -1 : 1;
}

int main(){
    int n; scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d %d",&u[i],&d[i]);
        id[i] = i;
    }
    // Bước 1 + Bước 2: Chia nhóm và sắp xếp thứ tự
    qsort(id,n,sizeof(int),cmp);
    // Bước 3: Quá trình leo lên-xuống
    int up = 0, down = 0;
    for(int i = 0; i < n; i++){
        int k = id[i];
        up+=u[k]; // up: thời điểm người k leo lên xong và sẵn sàng để xuống
                  // down: thời điểm người trước đó xuống xong -> đường xuống trống, có thể xuông
         
        if(up>down) down=up+d[k]; // người k lên xong nhưng đường xuống có người khác -> phải chờ: bắt đầu xuống từ up, kết thúc tại up + d[k]
        else down+=d[k]; // đường xuống trống -> người k xuống ngay
    }
    printf("%d",down);
}
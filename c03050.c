/*
PTIT Code - C03050 - Điểm trung tâm:
    Tóm tắt đề bài: Có n điểm trên mặt giấy (đánh số 1 đến n),
    có n - 1 đoạn thẳng nối hai điểm bất kỳ.
    [?] Kiểm tra xem có điểm nào có thể nối được với tất cả n-1 điểm còn lại không? (là điểm trung tâm được nhắc đến trong đề bài)

    Đây thực chất là bài kiểm tra đồ thị hình sao (star graph) trên một cây gồm n đỉnh, n - 1 cạnh.
    (Star graph là cây mà có một đỉnh nối với tất cả, còn lại chỉ nối với đúng một đỉnh)
    
    Ý tưởng: Một điểm được gọi là trung tâm nếu nó xuất hiện trong tất cả các đoạn
    (tức là mỗi đoạn đều nối với điểm đó).
    Vậy đơn giản ta chỉ cần: 
        - Đọc hai đoạn đầu tiên, kiểm tra xem có đỉnh nào chung giữa hai đoạn.
          Đặt đỉnh ấy là điểm trung tâm c
        - Đọc tiếp các đoạn còn lại, nếu tồn tại đoạn nào không chứa c,
          kết luận rằng đó không phải star graph.
        - Nếu đã duyệt hết, tất cả các đoạn đều chứa c, vậy đó là star graph.

    Lưu ý: Nhập vào 1 3, tức là đoạn thẳng nối điểm 1 với điểm 3.
*/

#include <stdio.h>

int main(){
    int n; scanf("%d",&n);
    int a,b,x,y,c;
    scanf("%d %d",&a,&b); // đoạn 1
    scanf("%d %d",&x,&y); // đoạn 2

    // Tìm điểm chung giữa đoạn 1 và đoạn 2, nếu có giả định là điểm trung tâm
    if(a == x || a == y) c = a; 
    else if(b == x || b == y) c = b;
    else{
        printf("No"); return 0;
    }

    // Duyệt các đoạn còn lại (từ đoạn thứ 3 đến đoạn thứ n - 1)
    for(int i = 2; i < n - 1; i++){
        scanf("%d %d",&x,&y);
        // Nếu cả hai đầu mút đều khác c, tức là không nối với trung tâm
        if(x != c && y != c) printf("No"); return 0;
    }

    printf("Yes");

}
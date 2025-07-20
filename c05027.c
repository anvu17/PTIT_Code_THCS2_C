#include <stdio.h>

/*
Đề bài: 
    Cho bảng chữ nhật vô hạn, tất cả các ô ban đầu là 0.
    Được phép thực hiện n thao tác, mỗi thao tác là: 
    > Tăng giá trị của các ô nằm trong hình chữ nhật
      góc trái trên: (1,1) đến (a,b) lên 1.

Test case mẫu: 
    3
    2 3
    3 7
    4 1
    > Có 3 thao tác tăng, mỗi thao tác là hình chữ nhật từ (1,1) đến (a,b)
      Mỗi thao tác tăng thêm 1 đơn vị cho các ô trong vùng 

    Cụ thể:
        Thao tác 1: Tăng đến (2,3)
        Thao tác 2: Tăng đến (3,7)
        Thao tác 3: Tăng đến (4,1)
        * Sau khi hết các thao tác, xác định số lớn nhất trong bảng, rồi đếm số lượng ô có giá trị đó

        Sau thao tác 1, đến (2,3):
          1   1   1   0   0
          1   1   1   0   0
          0   0   0   0   0
          0   0   0   0   0
        Tương tự, sau 3 thao tác, ta được bảng (4 hàng, 7 cột):
          3  2  2  1  1  1  1  
          3  2  2  1  1  1  1  
          2  1  1  1  1  1  1  
          1  0  0  0  0  0  0
        
        => Số lớn nhất là 3, xuất hiện 2 lần.

  [!] Ta nhận ra như sau: chỉ những ô nằm trong cả 3 vùng
  thì mới được cộng 3 lần (để đạt được giá trị lớn nhất).

  Giao của các vùng có thao tác tăng chính là hình chữ nhật con nhỏ nhất,
  cụ thể là hình có hàng 1 đến min(2,3,4) = 2,
  có cột từ 1 đến min(3,7,1) = 1
  Vậy các ô có giá trị lớn nhất đạt được là 2 x 1 = 2. 

Ví dụ khác: 
  Input:
    2
    3 5
    2 7
  Thao tác 1:
    1 1 1 1 1 0 0  
    1 1 1 1 1 0 0  
    1 1 1 1 1 0 0  
    0 0 0 0 0 0 0
  Thao tác 2:
    2 2 2 2 2 1 1  
    2 2 2 2 2 1 1  
    1 1 1 1 1 0 0  
    0 0 0 0 0 0 0
  => Output: 10 ( = 2 x 5 )

*/

int main(){
    int n; scanf("%d",&n);

    int min_a = 1e6, min_b = 1e6;

    for(int i = 0; i < n; i++){
        int a, b; scanf("%d %d",&a,&b);
        if(a < min_a) min_a = a;
        if(b < min_b) min_b = b;
    }

    printf("%lld\n",(long long)min_a * min_b);

}
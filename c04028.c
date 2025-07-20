/*
SẮP XẾP CHÈN:
    - Ý tưởng chính:
        Mảng được chia làm hai phần:  đã sắp xếp (bên trái) và chưa sắp xếp (bên phải).
    - Cụ thể:
        + Coi phần tử đầu tiên là đã sắp xếp. Bắt đầu từ phần tử thứ 2.
        + Lấy phần tử hiện tại từ phần chưa sắp xếp.
        + So sánh ngược về bên trái, dịch các phần tử lớn hơn nó sang phải.
        + Chèn phần tử vào đúng vị trí trong phần đã sắp xếp.
        + Lặp lại cho đến khi hết mảng.
*/

#include <stdio.h>

int main(){
    int n; scanf("%d",&n); int a[n];
    for(int i = 0; i < n; i++) scanf("%d",&a[i]);

    for(int i = 0; i < n; i++){
        int k = a[i], // k là phần tử cần chèn vào đúng vị trí
        j = i - 1; // j là chỉ số để duyệt ngược từ vị trí i - 1 về đầu mảng (phần đã sắp xếp)

        // Dịch các phần tử lớn hơn k sang phải:
        while(j >= 0 && a[j] > k){
            a[j+1] = a[j]; // dịch phần tử a[j] sang phải;
            j--; // tiếp tục xét phần tử bên trái (a[j-1])
        }

        // Sau khi đã dời được hết các phần tử lớn hơn -> chèn k vào đúng vị trí
        a[j+1] = k;

        printf("Buoc %d:",i);
        for(int x = 0; x <= i; x++) printf(" %d",a[x]);
        printf("\n");
    }
}
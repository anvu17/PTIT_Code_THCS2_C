#include <stdio.h>

int main(){
    int n; scanf("%d",&n); int a[n];
    for(int i = 0; i < n; i++) scanf("%d",&a[i]);

    // Sắp xếp chọn (Selection sort):
    for(int i = 0; i < n-1; i++){
        int min_pos = i; // giả sử a[i] là phần tử nhỏ nhất trong phần chưa sắp xếp
        for(int j = i+1; j < n; j++){ // tìm phần tử nhỏ hơn trong khoảng i+1 đến n-1
            if(a[j]<a[min_pos]) min_pos = j; // cập nhật min_pos
        }
        if(min_pos!=i){ // nếu tìm được min_pos chứa số nhỏ hơn a[i] -> hoán đổi a[i] và a[min_pos]
            int tmp=a[i];
            a[i]=a[min_pos];
            a[min_pos]=tmp;
        }
        // Sau mỗi vòng lặp, một phần tử nhỏ nhất trong phần chưa sắp xếp được đẩy về đúng vị trí
        // (vị trí đầu tiên trong phần chưa sắp xếp)
    }

    for(int i = 0; i < n; i++){
        if(i>0) printf(" ");
        printf("%d",a[i]);
    }    
}
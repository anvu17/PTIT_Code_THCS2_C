/*
BỘ BA PYTHAGORAS:
- Ý tưởng các bước thực hiện:
1) Lấy bình phương tất cả các phần tử.
2) Sắp xếp theo thứ tự tăng dần.
3) Duyệt ngược mảng. Tại vị trí i, giả sử rằng phần tử lớn nhất trong bộ ba
là c^2. Sử dụng kỹ thuật hai con trỏ để tìm a^2 và b^2
thỏa mãn a^2 + b^2 = c^2. Hai con trỏ ở hai đầu của phần còn lại.
Tức là con trỏ trái: l = 0, con trỏ phải r = i - 1 (trước c^2)
Xét:
    - Nếu sum = c^2 -> Tìm được bộ số thỏa mãn
    - sum < c^2 -> Tổng còn nhỏ -> Tăng con trỏ trái (l++)
    - sum > c^2 -> Tổng đang lớn -> Tăng con trỏ phải (r--)
*/

#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    if(*(long long*)a > *(long long*)b) return 1;
    if(*(long long*)a < *(long long*)b) return -1;
}

int pythagoreanTriplet(long long a[], int n){
    for(int i = 0; i < n; i++) a[i] *= a[i];

    qsort(a,n,sizeof(long long),cmp);

    for(int i = n - 1; i > 1; i--){
        int l = 0, r = i - 1;
        while(l < r){
            if(a[l] + a[r] == a[i]) return 1;
            if(a[l] + a[r] < a[i]) l++;
            else r--;
        }
    }

    return 0;
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n); long long a[n];
        for(int i = 0; i < n; i++) scanf("%lld",&a[i]);
        if(pythagoreanTriplet(a,n)) printf("YES\n");
        else printf("NO\n");
    }
}
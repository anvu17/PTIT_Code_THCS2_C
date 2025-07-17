#include <stdio.h>

/*
Ngoài các vị trí biên là 1 thì các vị trí khác
có giá trị bằng giá trị chếch trái + chếch phải của hàng trên

Nếu vị trí hiện tại là (n,k);
thì có thể tính được bằng: 
(n - 1, k - 1) + (n - 1, k) 
^^^^^^^^^^^^^^   ^^^^^^^^^^
bên trái         bên phải

Ví dụ:

Dòng 3:           1     3     3     1
Chỉ số k:         0     1     2     3

Dòng 4:        1     4     6     4     1
               k=0   1     2     3     4
*/

int pascal(int n, int k){
    if(k == 0 || k == n) return 1;
    return pascal(n - 1, k - 1) + pascal(n - 1, k);
}


int main(){
    int n; scanf("%d",&n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++) printf("%d ",pascal(i,j));
        printf("\n");
    }
}
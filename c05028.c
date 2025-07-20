#include <stdio.h>

int a[10][10], n;

// Đảo 0 thành 1 và ngược lại ở các ô từ (0,0) đến (i,j)
void swap(int i, int j){
    for(int x = 0; x <= i; x++)
        for(int y = 0; y <= j; y++) a[x][y] = 1 - a[x][y];
}

// Số bước tối thiểu để đưa bảng về toàn 0.
// Duyệt từ dưới phải (n - 1,n - 1) lên trên trái (0,0)
int steps(){
    int s = 0;
    for(int i = n - 1; i >= 0; i--){
        for(int j = n - 1; j >= 0; j--){
            if(a[i][j]){
            s++;
            swap(i,j);
            }
        }
    }
    return s;
}

int main(){
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            char ch; scanf(" %c",&ch);
            a[i][j] = ch - '0';
        }
    }
    printf("%d\n",steps());
}
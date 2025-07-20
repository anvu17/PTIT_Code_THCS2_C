#include <stdio.h>

int main(){
    int h; scanf("%d",&h);

    char ch = 'A';

/* 
Chạy i từ 1 đến bằng h:
- Dòng i in ra i ký tự chữ cái
- Ký tự đầu tiên của i là 'A' + (i - 1)
- Các ký tự tiếp theo được tính bằng cách cộng dồn bước nhảy: 
    Bước đầu là (h - 1), sau đó giảm dần h - 2, ..., h - (i - 1);

Ví dụ h = 4:
Dòng 1: A
Dòng 2: B E(=B+3)
Dòng 3: C F(=C+3) H(=F+2)
Dòng 4: D G(=D+3) I(=G+2) J(=I+1) 
*/

    for(int i = 1; i <= h; i++){
        char tmp = ch;
        for(int j = 1; j <= i; j++){
            printf("%c ",tmp);
            tmp += h-j;
        }
        ch++;
        printf("\n");
    }
}
#include <stdio.h>

int main(){
    int r,c; scanf("%d %d",&r,&c);

    int lim = r < c ? r : c; // r <= c thì tạo r dòng; r > c thì tạo c dòng, còn lại lặp lại

    // Phần thay đổi
    for(int i = 0; i < lim; i++){
        char ch = 'a' + r - 1;
        for(int j = 0; j < c; j++){
            if(j <= i) printf("%c",ch--); // lùi dần khi cột đang xét <= hàng đang xét
            else printf("%c",ch+1); // in lại ký tự cuối cùng vừa in
        }
        printf("\n");
    }   
    
    // Phần lặp lại:
    for(int i = lim; i < r; i++){
        char ch = 'a' + r - 1;
        for(int j = 0; j < c; j++) printf("%c",ch--);
        printf("\n");
    }
}
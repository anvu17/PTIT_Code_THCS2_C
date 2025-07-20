#include <stdio.h>
#include <string.h>

int lis(char c[]){
    int len = strlen(c);
    // lis[i]: chiều dài dãy con tăng dài nhất kết thúc tại i
    int lis[len];
    for(int i = 0; i < len; i++){
        lis[i] = 1;
        for(int j = 0; j < i; j++){
            if(c[i] > c[j] && lis[i] < lis[j] + 1) lis[i] = lis[j] + 1;
        }
    }
    int res = 0;
    for(int i = 0; i < len; i++){
        if(lis[i] > res) res = lis[i];
    }
    return 26 - res; // 26 (số lượng chữ cái trong bảng chữ cái) - số lượng ký tự của dãy con tăng dài nhất
}

int main(){
    char c[51]; scanf("%s",c);
    printf("%d",lis(c));
}
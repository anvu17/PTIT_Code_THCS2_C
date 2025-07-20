#include <stdio.h>
#include <string.h>

int main(){
    char s[100001]; scanf("%s",s);
    int pos = 0, len = strlen(s);
    // Vòng lặp:
    // Duyệt tìm chữ cái có thứ tự lớn nhất trong bảng (từ vị trí pos trở đi)
    // sau đó in hết các chữ cái đó theo thứ tự ban đầu (từ vị trí pos trở đi)
    while(pos < len){
        char tmp = s[pos];
        int last_pos = pos;
        for(int i = pos; i < len; i++){
            if(s[i] > tmp) tmp = s[i];
        }
        for(int i = pos; i < len; i++){
            if(s[i] == tmp){
                printf("%c",s[i]);
                last_pos = i;
            }
        }
        pos = last_pos + 1;
    }
}
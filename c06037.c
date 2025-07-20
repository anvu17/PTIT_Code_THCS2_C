/*
ĐẾM SỐ CẶP ĐOẠN THẲNG GIAO NHAU TRONG VÒNG TRÒN

    Tóm tắt đề bài:
        - Cho chuỗi 52 ký tự in hoa (các ký tự này là các chữ cái từ A đến Z),
        mỗi ký tự xuất hiện đúng hai lần.
        - Viết các ký tự lên một vòng tròn theo thứ tự chuỗi.
        - Nối mỗi cặp ký tự giống nhau.
        YÊU CẦU: Đếm số cặp đoạn thẳng nối giao nhau.
        
    Ý tưởng:
        - Lưu hai vị trí xuất hiện của mỗi chứ cái,
        nối hai vị trí ấy sẽ được một đoạn thẳng tương ứng.
        - Duyệt qua tất cả các cặp đoạn thẳng (lưu vào mảng pos[26][2]).
        - Với mỗi cặp, kiểm tra xem hai đoạn thẳng có giao nhau không:
            Hai đoạn (a1,a2) và (b1,b2) giao nhau khi
            một đoạn chen vào giữa đoạn còn lại,
            tức (a1 < b1 < a2 < b2) hoặc (b1 < a1 < b2 < a2).
            (xem hình ảnh minh họa tại /assets/c06037.jpg)

*/

#include <stdio.h>

int pos[26][2], cnt[26];

int isIntersect(int a, int b){
    int a1 = pos[a][0], a2 = pos[a][1];
    int b1 = pos[b][0], b2 = pos[b][1];
    
    return((a1 < b1 && b1 < a2 && a2 < b2) || (b1 < a1 && a1 < b2 && b2 < a2));
}

int main(){
    char s[53]; scanf("%s",s);
    for(int i = 0; i < 52; i++){
        int ch = s[i] - 'A';
        pos[ch][cnt[ch]++] = i;
    }
    
    int total = 0;
    
    for(int i = 0; i < 25; i++){
        for(int j = i + 1; j < 26; j++){
            if(isIntersect(i,j)) total++;
        }
    }
    printf("%d",total);
}
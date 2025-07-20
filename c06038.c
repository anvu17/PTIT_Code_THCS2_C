/*
SỐ VÒNG (Cyclic number):

    Mục tiêu: Kiểm tra số nguyên n chữ số (2 <= n <= 60, có thể có số 0 ở đầu)
    xem có phải số vòng hay không.
    
    Ý tưởng: Kiểm tra khi nhân số đó với các số từ 1 đến n,
    kết quả có phải là hoán vị xoay vòng của chính nó không.
        142857 × 1 = 142857
        142857 × 2 = 285714
        142857 × 3 = 428571
        142857 × 4 = 571428
        142857 × 5 = 714285
        142857 × 6 = 857142
        => 142857 là số vòng 
    Các bước thực hiện:
        1) Đọc số num dưới dạng chuỗi
        2) Thực hiện nhân num với 1 (đến số n). Lưu vào chuỗi res.
        3) Kiểm tra res có phải hoán vị xoay vòng của num hay không:
            Phương pháp kiểm tra nhanh:
            - Nối 2 chuỗi num, tạo chuỗi double_num.
            - Kiểm tra res có phải chuỗi con của double_num không.
        4) Kết luận:
            Nếu tất cả phép kiểm tra trên đều cho kết quả đúng, 
            số đó là số xoay vòng.
*/


#include <stdio.h>
#include <string.h>

void multiply(char *num, int n, char *res){
    int len = strlen(num);
    int carry = 0, pos = 0;
    char tmp[61];

    for(int i = len - 1; i >= 0; i--){
        int p = (num[i] - '0') * n + carry;
        tmp[pos++] = (p%10) + '0';
        carry = p / 10;
    }

    while(carry){
        tmp[pos++] = (carry % 10) + '0';
        carry /= 10;
    }

    for(int i = 0; i < pos; i++) res[i] = tmp[pos - 1 - i];
    res[pos] = '\0';
}

int isRotation(char *s1, char *s2){
    if(strlen(s1) != strlen(s2)) return 0;
    
    char double_s[121];
    strcpy(double_s,s1);
    strcat(double_s,s1);

    return strstr(double_s,s2) != NULL;
}

int isCyclic(char *num){
    int len = strlen(num);
    char res[61];

    for(int i = 1; i <= len; i++){
        multiply(num,i,res);
        if(!isRotation(num,res)) return 0;
    }
    return 1;
}

int main(){
    int t; char num[61];
    scanf("%d",&t);
    while(t--){
        scanf("%s",num);
        printf(isCyclic(num) ? "YES\n" : "NO\n");
    }
}
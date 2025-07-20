/*
MẢNG DẤU ĐỐI XỨNG (valid parentheses)

    Ý tưởng: Kiểm tra chuỗi có các cặp dấu đối xứng hay không:
        - Mở loại dấu nào thì phải đóng đúng loại dấu ấy.
        - Có mở phải có đóng. Mở-đóng phải đúng thứ tự.

    Hướng tiếp cận: Sử dụng mảng như stack để tạm lưu các dấu chưa đóng:
        - Khi gặp dấu mở: đẩy (push) vào stack
        - Khi gặp dấu đóng: lấy phần tử trên cùng trong stack (pop),
        nếu so sánh khớp thì tiếp tục.
        - Nếu sai hoặc thiếu cặp -> không đối xứng,
        còn nếu cuối cùng stack rỗng (tất cả đã khớp) -> đối xứng.
    
    Ví dụ:
        - Input: {[("")]} -> Output: 1 (đối xứng)
        - Input: {[)]} -> Output: 0 (không đối xứng)
*/

#include <stdio.h>

int isBalanced(char *s){
    char stack[1000];
    int top = -1; // đỉnh stack (chỉ số phần tử trên cùng), -1: rỗng
    
    for(int i = 0; s[i]; i++){
        char c = s[i];
        // Dấu mở: (, [, {
        if(c == '(' || c == '[' || c == '{'){
            // push
            top++;
            stack[top] = c;
        }
        // Dấu đóng: ), ], }
        else if(c == ')' || c == ']' || c == '}'){
            if(top == -1) return 0; // nếu stack rỗng tức không có dấu mở để đóng 
            char last = stack[top];
            top--; // pop
            
            // so sánh xem dấu mở-đóng có khớp nhau không
            if((c == ')' && last != '(' || c == ']' && last != '[' || c == '}' && last != '{')) return 0;
        }
        // Xử lý dấu ' hoặc "
        else if(c == '\'' || c == '\"'){
            if(top >= 0 && stack[top] == c) top--; // nếu có dấu mở trước đang ở top thì giờ là đóng -> pop
            else{
                // nếu không thì đây là dấu mở, thực hiện push
                top++;
                stack[top] = c;
            }
        }
    }
    return(top == -1);
}

int main(){
    char s[1001]; scanf("%s",s);
    printf("%d",isBalanced(s));
}
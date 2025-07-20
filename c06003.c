#include <stdio.h>
#include <string.h>

int main(){
    int t; scanf("%d",&t); getchar();
    while(t--){
        char s[202]; fgets(s,sizeof(s),stdin);
        int cnt = 0, i = 0, len = strlen(s);
        while(i < len){
            // bỏ qua các dấu cách liên tiếp (hoặc ở đầu)
            while(i < len && s[i] == ' ') i++;
            // phát hiện ký tự không phải dấu cách, tức bắt đầu từ mới
            if(i < len) cnt++;
            // bỏ qua các ký tự không phải dấu cách (duyệt hết từ đó)
            while(i < len && s[i] != ' ') i++;
        }
        printf("%d\n",cnt);
    }
}
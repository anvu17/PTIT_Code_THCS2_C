#include <stdio.h>
#include <ctype.h>

int main(){
    int l=0,d=0,o=0;
    char s[2006];
    fgets(s,sizeof(s),stdin);
    for(int i = 0; s[i]; i++){
        if(isalpha(s[i])) l++;
        else if(isdigit(s[i])) d++;
        else o++;
    }
    printf("%d %d %d",l,d,o-1);
    // o-1 là bỏ đi ký tự "\n" cuối chuỗi do fgets thêm vào
}
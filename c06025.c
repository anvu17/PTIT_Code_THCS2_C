#include <stdio.h>
#include <string.h>

void reverse(char *a){
    int l = 0, r = strlen(a) - 1;
    while(l < r){
        int tmp = a[l];
        a[l++] = a[r];
        a[r--] = tmp;
    }
}

// Quy ước rằng a >= b:
void subtract(char *a, char *b, char *res){
    reverse(a); reverse(b);
    int len1 = strlen(a), len2 = strlen(b),
    carry = 0, k = 0;

    for(int i = 0; i < len1; i++){
        int x = a[i] - '0',
        y = i < len2 ? b[i] - '0' : 0,
        d = x - y - carry;

        if(d < 0){
            d+=10;
            carry = 1;
        } else carry = 0;
    
        res[k++] = d + '0';
    }

    while(k > 1 && res[k-1] == '0') k--; // loại phần leading zeros ở đầu
    res[k] = '\0';

    reverse(res);
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        char a[1001],b[1001],res[1002]; scanf("%s%s",a,b);
        // Luôn lấy số lớn hơn trừ đi số nhỏ hơn
        if(strlen(a) > strlen(b) || (strlen(a) == strlen(b) && strcmp(a,b)>=0)) subtract(a,b,res);
        else subtract(b,a,res);
        printf("%s\n",res);
    }
}
#include <stdio.h>
#include <string.h>

void reverse(char *a){
    int l = 0, r = strlen(a) - 1;
    while(l<r){
        char tmp = a[l];
        a[l++] = a[r];
        a[r--] = tmp;
    }
}

void add(char *a, char *b, char *res){
    reverse(a); reverse(b);

    int len1 = strlen(a), len2 = strlen(b);
    int n = len1 > len2 ? len1 : len2;
    int carry = 0, k = 0;

    for(int i = 0; i < n; i++){
        int x = i < len1 ? a[i] - '0' : 0;
        int y = i < len2 ? b[i] - '0' : 0;

        int s = x + y + carry;
        res[k++] = (s % 10) + '0';
        carry = s/10;
    }
    
    if(carry) res[k++] = carry + '0'; res[k] = '\0';

    reverse(res);
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        char a[501],b[501],res[502]; scanf("%s%s",a,b);
        add(a,b,res);
        printf("%s\n",res);
    }
}
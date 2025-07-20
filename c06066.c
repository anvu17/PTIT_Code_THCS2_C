#include <stdio.h>
#include <string.h>

void sum(char *a, char *b, char *res){
    int len1 = strlen(a), len2 = strlen(b);
    int i = len1-1, j = len2-1, k = 0, carry = 0;
    char tmp[205];

    while(i >= 0 || j >= 0 || carry){
        int x = (i>=0) ? a[i--] - '0' : 0;
        int y = (j>=0) ? b[j--] - '0' : 0;
        tmp[k++] = (x+y+ carry)%10 + '0';
        carry = (x+y+carry)/10;
    }

    for(int m = 0; m < k; m++) res[m] = tmp[k - 1 - m];
    res[k] = '\0';
}

int main(){
    char s[201]; scanf("%s",s);
    while(strlen(s)>1){
        int n=strlen(s),mid=n/2;
        char l[105],r[105],res[205];
        strncpy(l,s,mid);
        l[mid] = 0;
        strcpy(r,s+mid);
        sum(l,r,res);
        printf("%s\n",res);
        strcpy(s,res);
    }
}

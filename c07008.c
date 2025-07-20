#include <stdio.h>
#include <string.h>

int coef[10001];

void skip_space(char **s){
    while(**s == ' ') (*s)++;
}

/*
Hàm phân tích chuỗi đa thức s: 
- Mỗi hạng tử có dạng a*x^e
- Đa thức có nhiều hạng tử được nối với nhau bằng '+'
- Hàm duyệt qua từng hạng từ, đọc hệ số và mũ rồi cộng vào coef[e]. 
*/
void parse(char *s){
    int a,e;
    while(*s){
        skip_space(&s);
        if(sscanf(s,"%d*x^%d",&a,&e)==2) coef[e] += a;
        // Nhảy qua từng ký tự cho đến khi kết thúc chuỗi hoặc
        // qua dấu '+' để chuẩn bị xử lý hạng tử tiếp
        while(*s && *s++ != '+');
    }
}

int main(){
    int t; scanf("%d",&t); getchar();
    while(t--){
        memset(coef,0,sizeof(coef));

        char s1[10002], s2[10002];
        fgets(s1, sizeof(s1), stdin);
        fgets(s2, sizeof(s2), stdin);
        s1[strcspn(s1, "\n")] = '\0';
        s2[strcspn(s2, "\n")] = '\0';

        parse(s1);
        parse(s2);

        /*
        Sau các lần gọi hàm parse sẽ thu được mảng coef[]
        chứa đầy đủ các hệ số của đa thức s
        */

        int first = 1;
        for(int i = 10000; i >= 0; i--){
            if(coef[i]){
                if(!first) printf(" + ");
                printf("%d*x^%d",coef[i],i);
                first = 0;
            }
        }
        printf("\n");
    }
}
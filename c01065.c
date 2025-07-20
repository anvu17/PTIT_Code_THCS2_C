#include <stdio.h>

int isPrimeDigit(char c){
    return c == '2' || c == '3' || c == '5' || c == '7';
}

int main(){
    char n[11]; scanf("%s",n);
    int cnt[10]={0}, mark[10]={0};

    for(int i = 0; n[i]; i++){
        char c = n[i];
        if(isPrimeDigit(c)){
            int d = c -'0';
            cnt[d]++;
            if(!mark[d]) mark[d] = 1;
        }
    }

    for(int i = 0; n[i]; i++){
        int d = n[i] - '0';
        if(mark[d]){
            printf("%d %d\n",d,cnt[d]);
            mark[d] = 0;
        }
    }

}
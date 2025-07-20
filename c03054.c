#include <stdio.h>
#include <string.h>

void cd(char *n){
    char res[20]; int k;
    for(int i = 0; n[i]; i++){
        if(n[i]=='1') res[k++] = '1';
        else if(n[i]=='0' || n[i]=='8' || n[i]=='9') res[k++] = '0';
        else{
            printf("INVALID\n");
            return;
        }
    }
    res[k]='\0';
    // Bỏ số 0 ở đầu:
    int i = 0;
    while(res[i]=='0') i++;
    if(res[i]=='\0') printf("INVALID\n"); // nếu chỉ toàn 0
    else printf("%s\n",res+i); // in từ vị trí có giá trị khác 0 đầu tiên
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        char n[20]; scanf("%s",n);
        cd(n);
    }
}

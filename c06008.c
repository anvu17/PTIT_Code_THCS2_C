#include <stdio.h>
#include <string.h>

int main(){
    char s[102];
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")] = 0;
    char r[102][102]; // Các từ không bị lặp, mỗi từ là một dòng
    int w = 0; // số từ kết quả
    char *token = strtok(s," ");
    while(token != NULL){
        int found = 0;
        for(int i = 0; i < w; i++){
            if(strcmp(token,r[i])==0){ // trả về 0 tức là giống nhau
                found = 1;
                break;
            }
        }
        if(!found) strcpy(r[w++],token);
        token = strtok(NULL," ");
    }
    for(int i = 0; i < w; i++){
        printf("%s ",r[i]);
    }
}
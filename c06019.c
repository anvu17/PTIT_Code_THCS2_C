#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char name[55],*token,last[20];
    fgets(name,sizeof(name),stdin);
    token = strtok(name," \n");
    while(token){
        for(int i = 0; token[i]; i++) token[i] = tolower(token[i]);
        strcpy(last,token);
        token = strtok(NULL," \n");
        if(token) printf("%c",last[0]);
    }
    printf("%s@ptit.edu.vn\n",last);
}
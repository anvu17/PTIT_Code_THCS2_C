#include <stdio.h>
#include <string.h>

int main(){
    char s[102]; fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")] = 0;

    char todelete[102]; scanf("%s",todelete);

    char *token = strtok(s," ");
    while(token!=NULL){
        if(strcmp(token, todelete)!=0) printf("%s ",token);
        token = strtok(NULL," ");
    }
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void ChuanHoa(char *c){
    c[0] = toupper(c[0]);
    for(int i = 1; i < strlen(c); i++) c[i] = tolower(c[i]);
}

int main(){
    int t; scanf("%d",&t); getchar();
    while(t--){
        char name[82],w[20][40],n=0;
        fgets(name,sizeof(name),stdin);
        name[strcspn(name,"\n")] = 0;

        char *tok = strtok(name," ");
        while(tok!=NULL){
            strcpy(w[n++],tok);
            tok = strtok(NULL," ");
        }

        for(int i = 0; i < n; i++){
            ChuanHoa(w[i]); printf("%s ",w[i]);
        }

        printf("\n");
    }
}
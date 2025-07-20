#include <stdio.h>
#include <string.h>
#include <ctype.h>

void chuanhoa(char c[]){
    c[0] = toupper(c[0]);
    int len = strlen(c);
    for(int i = 1; i < len; i++) c[i] = tolower(c[i]);
}

int main(){
    int t; scanf("%d",&t);
    getchar();
    while(t--){
        char c[100], a[20][50];
        int n = 0;
        fgets(c,sizeof(c),stdin);
        c[strcspn(c,"\n")] = '\0';
        char *token = strtok(c, " ");
        while(token != NULL){
            strcpy(a[n],token);
            n++;
            token = strtok(NULL," ");
        }
        for(int i = 1; i < n; i++){
            chuanhoa(a[i]);
            if(i < n-1) printf("%s ",a[i]);
            else printf("%s",a[i]);
        }
        int len = strlen(a[0]);
        for(int i = 0; i < len; i++) a[0][i] = toupper(a[0][i]);
        printf(", %s",a[0]);
        printf("\n");
    }
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int cmp(char *a, char *b){
    int n1 = strlen(a), n2 = strlen(b);
    if(n1!=n2) return 0;
    for(int i = 0; i < n1; i++) if(tolower(a[i])!=tolower(b[i])) return 0;
    return 1;
}

int main(){
    int t; scanf("%d",&t); getchar();
    for(int i = 1; i <= t; i++){
        char s1[202],s2[22];
        fgets(s1,sizeof(s1),stdin);
        s1[strcspn(s1,"\n")] = 0;
        fgets(s2,sizeof(s2),stdin);
        s2[strcspn(s2,"\n")] = 0;
        printf("Test %d: ",i);
        char *tok = strtok(s1," ");
        while(tok!=NULL){
            if(!cmp(tok,s2)) printf("%s ",tok);
            tok = strtok(NULL," ");
        }
        printf("\n");
    }
}
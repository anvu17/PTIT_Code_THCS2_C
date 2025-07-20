#include <stdio.h>
#include <string.h>

int check(char *p){
/*
    2 8 - H 1   9 9 9 . 9  9
i:  0 1 2 3 4 5 6 7 8 9 10 11
*/
    if(p[6] < p[7] && p[7] < p[8] && p[8] < p[10] && p[10] < p[11]) return 1;
    if(p[6] == p[7] && p[7] == p[8] && p[8] == p[10] && p[10] == p[11]) return 1;
    if(p[6] == p[7] && p[7] == p[8] && p[10] == p[11]) return 1;
    for(int i = 6; i <= 11; i++) if(i!=9 && p[i]!='6' && p[i]!='8') return 0;
    return 1;
}

int main(){
    int t; scanf("%d",&t); getchar();
    while(t--){
        char p[15]; fgets(p,sizeof(p),stdin);
        printf(check(p) ? "YES\n" : "NO\n");
    }
}
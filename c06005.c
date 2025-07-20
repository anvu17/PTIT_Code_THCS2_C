#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char a[100][100]; int n = 0;
    while(scanf("%s",a[n]) != -1){
        for(int i = 0; a[n][i]; i++) a[n][i] = tolower(a[n][i]);
        n++;
    }
    int mark[100]={};
    for(int i = 0; i < n; i++){
        if(mark[i]) continue;
        int cnt=1;
        for(int j = i + 1; j < n; j++){
            if(!mark[j] && strcmp(a[i],a[j])==0){
                cnt++;
                mark[j]=1;
            }
        }
        printf("%s %d\n",a[i],cnt);
    }
}
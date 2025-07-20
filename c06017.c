#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int cmp(const void *a, const void *b){
    char *x = (char*)a;
    char *y = (char*)b;
    return strcmp(x,y);
}

int split(char *s, char arr[][102]){
    int cnt = 0;
    char *token = strtok(s, " ");
    while(token){
        strcpy(arr[cnt++],token);
        token = strtok(NULL, " ");
    }
    return cnt;
}

int main(){
    char s1[102], s2[102], a[102][102], b[102][102];
    fgets(s1,sizeof(s1),stdin);
    fgets(s2,sizeof(s2),stdin);
    s1[strcspn(s1,"\n")] = 0;
    s2[strcspn(s2,"\n")] = 0;

    int cnt1 = split(s1,a), cnt2 = split(s2,b);

    qsort(a,cnt1,sizeof(a[0]),cmp);

    for(int i = 0; i < cnt1; i++){
        if(i > 0 && strcmp(a[i], a[i-1]) == 0) continue;
        int found = 0;
        for(int j = 0; j < cnt2; j++){
            if(strcmp(a[i],b[j])==0){
                found = 1;
                break;
            }
        }
        if(!found) printf("%s ",a[i]);
    }
}
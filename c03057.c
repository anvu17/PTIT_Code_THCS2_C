#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void replace(char *s, char c1, char c2){
    for(int i = 0; s[i]; i++) if(s[i] == c1) s[i] = c2;
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        char x1[20], x2[20]; scanf("%s %s",x1,x2);

        replace(x1,'6','5');
        replace(x2,'6','5');
        long long min = atoll(x1) + atoll(x2);

        replace(x1,'5','6');
        replace(x2,'5','6');
        long long max = atoll(x1) + atoll(x2);

        printf("%lld %lld\n",min,max);
    }
}
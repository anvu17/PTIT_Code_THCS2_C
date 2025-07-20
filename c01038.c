#include <stdio.h>
#include <string.h>

int main(){
    char n[10]; scanf("%s",n);
    int l = strlen(n);

    char tmp;
    tmp = n[0];
    n[0] = n[l - 1];
    n[l - 1] = tmp;

    if(n[0]=='0') printf("%s",n + 1);
    else printf("%s",n);
}
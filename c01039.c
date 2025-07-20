#include <stdio.h>
#include <string.h>

int main(){
    char n[10]; scanf("%s",n);
    if(n[0]=='-') printf("%d",strlen(n)-1);
    else printf("%d",strlen(n));
}
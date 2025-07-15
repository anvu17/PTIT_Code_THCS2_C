#include <stdio.h>
#include <string.h>

int main(){
    char n[10]; scanf("%s",n);
    printf("%c %c",n[0],n[strlen(n) - 1]);
}
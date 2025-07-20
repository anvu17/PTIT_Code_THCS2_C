#include <stdio.h>
#include <string.h>

int isPrimeDigit(char n){
    return (n == '2' || n == '3' || n == '5' || n == '7');
}

int check(char *n){
    int l = 0, r = strlen(n) - 1;
    while(l<=r){
        if(!isPrimeDigit(n[l]) || n[l]!=n[r]) return 0;
        l++; r--;
    }
    return 1;
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        char n[502]; scanf("%s",n);
        printf(check(n) ? "YES\n" : "NO\n");
    }
}
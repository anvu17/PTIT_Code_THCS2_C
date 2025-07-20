#include <stdio.h>

int main(){
    int d; scanf("%d",&d);
    int y=d/365;
    d -= y*365;
    int w = d/7;
    d -= w * 7;
    printf("%d %d %d",y,w,d);
}
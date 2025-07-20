#include <stdio.h>
#include <math.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
       int xA,yA,xC,yC; scanf("%d %d %d %d",&xA,&yA,&xC,&yC);
       if(abs(xC-xA)==abs(yA-yC)) printf("YES\n");
       else printf("NO\n");
    }
}
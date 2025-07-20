#include <stdio.h>

int main(){
    int h; scanf("%d",&h);

    int tmp = 1;
    for(int i = 1; i <= h; i++){
        if(i%2!=0){
            for(int j = 0; j < i; j++) printf("%d ",tmp+j);
        }
        else{
            for(int j = i - 1; j >= 0; j--) printf("%d ",tmp+j);
        }
        printf("\n");
        tmp+=i;
    }
}
#include <stdio.h>

int main(){
    int h; scanf("%d",&h);

    char ch = 'a';

    for(int i = 1; i <= h; i++){
        char line[21];

        for(int j = 0; j < i; j++){
            line[j] = ch;
            ch++;
        }

        if(i%2==0){
            for(int j = i - 1; j >= 0; j--) printf("%c ",line[j]);
        }
        else for(int j = 0; j < i; j++) printf("%c ",line[j]);

        printf("\n");
    }
}
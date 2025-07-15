#include <stdio.h>

int main(){
	int r,c; scanf("%d %d",&r,&c);
	for(int i = 1; i <= r; i++){
		if(i <= c){
			for(int l = i; l <= c; l++) printf("%d",l);
			for(int m = c - 1; m >= c - i + 1; m--) printf("%d",m);
			printf("\n");
		}
		else{
		    for(int n = i; n >= i - c + 1; n--) printf("%d",n);
		    printf("\n");
		}
	}
}
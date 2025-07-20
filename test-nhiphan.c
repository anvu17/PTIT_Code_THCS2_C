#include <stdio.h>

int main(){
	int a; scanf("%d",&a);
	int b[10],i=0;
	if(a == 0){
		print("0");
		return 0;
	}
	while(a){
		b[i++]=a%2;
		a/=2;
	}
	for(int j = i - 1; j >= 0; j--) printf("%d",b[j]);
}
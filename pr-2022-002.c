#include <stdio.h>
#include <math.h>

int isPrime(int n){
	if(n < 2) return 0;
	for(int i = 2; i*i <= n; i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int isCircularPrime(int n){
	int cnt, tmp = n;
	while(tmp){
		cnt++;
		tmp/=10;
	}	
	int num = n;	
	while(isPrime(num)){
		int rem = num % 10;
		int div = num / 10;	
		num = (int)(pow(10,(cnt - 1))) * rem + div;
		if(num == n) return 1;		
	}
	return 0;
}

int main(){
	int t; scanf("%d",&t);
	while(t--){
		int n; scanf("%d",&n);
		if(isCircularPrime(n)) printf("1 ");
		else printf("0 ");
	}
}
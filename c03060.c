#include <stdio.h>

int main(){
	int n,k; scanf("%d %d",&n,&k);
	// Ý tưởng:
	// So sánh số lượng thừa số 2 trong n! có lớn hơn hay bằng k hay không
	int cnt=0,x=2;
	while(x<=n){
		cnt+=n/x;
		x*=2;
	}
	if(cnt>=k) printf("Yes");
	else printf("No");
}

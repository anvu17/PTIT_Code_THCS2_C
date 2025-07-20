/*
Số chỉ có 3 ước số phải là bình phương của một số nguyên tố:

để một số có đúng 3 ước số, các ước đó phải là: 
1) số 1
2) chính số ấy
3) một ước khác trong khoảng từ 1 đến số ấy 

vì vậy, số đó phải là bình phương của một số nguyên tố: 
giả sử p là số nguyên tố, các ước của p^2 sẽ là: 
1) số 1
2) p
3) p^2
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define RANGE 1000001

bool prime[RANGE + 1];

void sieve(){
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;

    for(int i = 2; i * i <= RANGE; i++){
        if(prime[i]){
            for(int j = i * i; j <= RANGE; j += i) prime[j] = false;
        }
    }
}

int main(){
    int t; scanf("%d",&t);
    sieve();
    while(t--){
        long long l,r; scanf("%lld %lld",&l,&r);
        int cnt = 0;
        for(long long i = 2; i <= RANGE && (long long)i * i <= r; i++){
            if(prime[i]){
                long long sq = (long long) i * i;
                if(sq >= l && sq <= r) cnt++;
            }
        }
        printf("%d\n",cnt);
    }
}
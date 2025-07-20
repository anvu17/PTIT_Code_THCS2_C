#include <stdio.h>
#include <string.h>

int val(char c){
    switch(c){
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
    return 0;
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        char s[101]; scanf("%s",s);
        int n = strlen(s), ans = 0;
        for(int i = 0; i < n; i++){
            int a = val(s[i]), b = val(s[i+1]);
            if(a<b){
                ans+=b-a;
                i++;
            } else ans+=a;
        }
        printf("%d\n",ans);
    }
}

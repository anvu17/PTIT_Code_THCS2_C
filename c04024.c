#include <stdio.h>

int main(){
    int n; scanf("%d",&n); int a[n];
    for(int i = 0; i < n; i++) scanf("%d",&a[i]);

    // Sắp xếp chọn (Selection sort):
    for(int i = 0; i < n-1; i++){
        int max_pos = i;
        for(int j = i+1; j < n; j++){
            if(a[j]>a[max_pos]) max_pos = j;
        }
        if(max_pos!=i){
            int tmp=a[i];
            a[i]=a[max_pos];
            a[max_pos]=tmp;
        }
    }

    for(int i = 0; i < n; i++){
        if(i>0) printf(" ");
        printf("%d",a[i]);
    }    
}
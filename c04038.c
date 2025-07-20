#include <stdio.h>

void selectionSort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        int min_idx = i;
        for(int j = i + 1; j < n; j++) if(a[j] < a[min_idx]) min_idx = j;
        if(min_idx!=i){
            int tmp = a[i];
            a[i] = a[min_idx];
            a[min_idx] = tmp;
        }
        for(int k = 0; k < n; k++) printf(" %d",a[k]);
        printf("\n");
    }
}

int main(){
    int n; scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++) scanf("%d",&a[i]);
    selectionSort(a, n);
}

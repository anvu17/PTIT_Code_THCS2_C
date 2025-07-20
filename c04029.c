#include <stdio.h>

void bubbleSort(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		int swapped = 0;
		for(int j = 0; j < n - 1 - i; j++){
			if(a[j] > a[j + 1]){
				int t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
				swapped = 1;
			}
		}
		if(swapped){
			printf("Buoc %d:",i + 1);
			for(int k = 0; k < n; k++) printf(" %d",a[k]);
		}
		else break;
		printf("\n");
	}
}

int main(){
	int n; scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++) scanf("%d",&a[i]);
	bubbleSort(a,n);
}

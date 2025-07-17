#include <stdio.h>

// Sắp xếp nổi bọt: hoán đổi vị trí các phần tử liền kề
void bubbleSort(int a[], int n){
	int tmp;
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - 1 - i; j++){
			if(a[j] > a[j + 1]){
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}

int main(){
    int n; scanf("%d",&n);
    int o[n], e[n], oCnt = 0, eCnt = 0;

    for(int i = 0; i < n; i++){
        int x; scanf("%d",&x);
        if(x%2==0) e[eCnt++] = x;
        else o[oCnt++] = x;
    }
    bubbleSort(o,oCnt); bubbleSort(e,eCnt);
    for(int i = 0; i < eCnt; i++) printf("%d ",e[i]);
    for(int i = 0; i < oCnt; i++) printf("%d ",o[i]);
}

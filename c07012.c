#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	int id;
	char name[100];
	char category[100];
	double buy,sell,profit;
} item;

int cmp(const void *a, const void *b){
	item *x = (item*)a;
	item *y = (item*)b;
	
	if(x->profit < y->profit) return 1;
	if(x->profit > y->profit) return -1;
	return x->id - y->id;
}

int main(){
	int n; scanf("%d",&n); getchar();
	
	item a[100];
	
	for(int i = 0; i < n; i++){
		a[i].id = i + 1;
		fgets(a[i].name,sizeof(a[i].name),stdin);
		a[i].name[strcspn(a[i].name,"\n")] = 0;
		fgets(a[i].category,sizeof(a[i].category),stdin);
		a[i].category[strcspn(a[i].category,"\n")] = 0;
		scanf("%lf %lf",&a[i].buy,&a[i].sell); getchar();
		a[i].profit = a[i].sell - a[i].buy;
	}
	
	qsort(a, n, sizeof(item), cmp);
	
	for(int i = 0; i < n; i++) printf("%d %s %s %.2lf\n",a[i].id,a[i].name,a[i].category,a[i].profit);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int id;
    char name[100];
    char dob[15];
    float g1,g2,g3,total;
} student;

int cmp(const void *a, const void *b){
    student *s1 = (student*)a;
    student *s2 = (student*)b;
    if(s2->total > s1->total) return 1;
    else if(s2->total < s1->total) return -1;
    else return s1->id - s2->id;
}

int main(){
    int n; scanf("%d",&n); getchar();
    student a[n];

    for(int i = 0; i < n; i++){
        a[i].id = i + 1;

        fgets(a[i].name,sizeof(a[i].name),stdin);
        a[i].name[strcspn(a[i].name,"\n")] = 0;

        fgets(a[i].dob,sizeof(a[i].dob),stdin);
        a[i].dob[strcspn(a[i].dob,"\n")] = 0;

        scanf("%f%f%f",&a[i].g1,&a[i].g2,&a[i].g3);
        getchar();
        a[i].total = a[i].g1 + a[i].g2 + a[i].g3;
    }

    qsort(a, n, sizeof(student), cmp);

    for(int i = 0; i < n; i++) printf("%d %s %s %.1f\n",a[i].id,a[i].name,a[i].dob,a[i].total);
}
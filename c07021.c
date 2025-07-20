#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int id;
    char name[50];
    float g1,g2,g3,total;
} student;

student a[500];
int cnt = 0;

void add(){
    int n; scanf("%d",&n); getchar();
    for(int i = 0; i < n; i++){
        a[cnt].id = cnt + 1; // id bắt đầu từ 1

        fgets(a[cnt].name,sizeof(a[cnt].name),stdin);
        a[cnt].name[strcspn(a[cnt].name,"\n")] = 0;

        scanf("%f %f %f",&a[cnt].g1,&a[cnt].g2,&a[cnt].g3); getchar();
        a[cnt].total = a[cnt].g1 + a[cnt].g2 + a[cnt].g3;

        cnt++;
    }
    printf("%d\n",n);
}

void update(){
    int sid; scanf("%d", &sid); getchar();

    fgets(a[sid-1].name,sizeof(a[sid-1].name),stdin);
    a[sid-1].name[strcspn(a[sid-1].name,"\n")] = 0;

    scanf("%f %f %f",&a[sid-1].g1,&a[sid-1].g2,&a[sid-1].g3); getchar();
    a[sid-1].total = a[sid-1].g1 + a[sid-1].g2 + a[sid-1].g3;

    printf("%d\n",sid);
}

int cmp(const void *a, const void *b){
    student *s1 = (student*)a;
    student *s2 = (student*)b;
    if(s1->total != s2->total) return (s1->total > s2->total) ? 1 : -1;
    return s1->id - s2->id;
}

void show(){
    qsort(a,cnt,sizeof(student),cmp);
    for(int i = 0; i < cnt; i++) printf("%d %s %.1f %.1f %.1f\n",a[i].id,a[i].name,a[i].g1,a[i].g2,a[i].g3);
}

int main(){
    while(1){
        int opt; scanf("%d",&opt); getchar();
        if(opt==1) add();
        else if(opt==2) update();
        else if(opt==3){
            show();
            break;
        }
    }
}
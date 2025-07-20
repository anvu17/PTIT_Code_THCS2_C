#include <stdio.h>
#include <string.h>

typedef struct{
    int id;
    char name[100];
    float g1,g2,g3,total;
} student;

student a[500];
int cnt = 0;

int isIncreasing(student s){
    return s.g1 < s.g2 && s.g2 < s.g3;
}

void add(){
    int n; scanf("%d",&n); getchar();
    for(int i = 0; i < n; i++){
        a[cnt].id = cnt + 1;

        fgets(a[cnt].name,sizeof(a[cnt].name),stdin);
        a[cnt].name[strcspn(a[cnt].name,"\n")] = 0;

        scanf("%f%f%f",&a[cnt].g1,&a[cnt].g2,&a[cnt].g3); getchar();
        a[cnt].total = a[cnt].g1 + a[cnt].g2 + a[cnt].g3;

        cnt++;
    }
    printf("%d\n",n);
}

void update(){
    int id; scanf("%d",&id); getchar();
    int i = id - 1;

    fgets(a[i].name,sizeof(a[i].name),stdin);
    a[i].name[strcspn(a[i].name,"\n")] = 0;

    scanf("%f%f%f",&a[i].g1,&a[i].g2,&a[i].g3); getchar();
    a[i].total = a[i].g1 + a[i].g2 + a[i].g3;

    printf("%d\n",id);
}

void show(){
    for(int i = 0; i < cnt; i++){
        if(isIncreasing(a[i]))
            printf("%d %s %.1f %.1f %.1f\n",a[i].id,a[i].name,a[i].g1,a[i].g2,a[i].g3);
    }
}

int main(){
    while(1){
        int opt;
        if(scanf("%d",&opt)!=1) break;
        getchar();
        if(opt==1) add();
        else if(opt==2) update();
        else if(opt==3){
            show();
            break;
        }
    }
}

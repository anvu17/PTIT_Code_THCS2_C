#include <stdio.h>
#include <string.h>

typedef struct{
    int id;
    char name[100];
    char dob[12];
    float g1,g2,g3,total;
} student;

int main(){
    int n; scanf("%d",&n); getchar();
    student a[n];
    float max = 0;
    for(int i = 0; i < n; i++){
        a[i].id = i + 1;
        fgets(a[i].name,sizeof(a[i].name),stdin);
        a[i].name[strcspn(a[i].name,"\n")] = 0;
        fgets(a[i].dob,sizeof(a[i].dob),stdin);
        a[i].dob[strcspn(a[i].dob,"\n")] = 0;
        scanf("%f%f%f",&a[i].g1,&a[i].g2,&a[i].g3); getchar();
        a[i].total = a[i].g1 + a[i].g2 + a[i].g3;
        if(a[i].total > max) max = a[i].total;
    }
    for(int i = 0; i < n; i++){
        if(a[i].total == max)
            printf("%d %s %s %.1f\n",a[i].id,a[i].name,a[i].dob,a[i].total);
    }
}
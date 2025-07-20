#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    float a,b,c;
} tri;

void input(tri *t){
    scanf("%f %f %f",&t->a,&t->b,&t->c);
}

float area(tri t){
    float p = (t.a + t.b + t.c)/2;
    return sqrt(p*(p - t.a)*(p - t.b)*(p - t.c));
}

void print(tri t){
    printf("%.0f %.0f %.0f\n", t.a, t.b, t.c);
}

/*
void writeFile(const char *fn, tri triangles[], int n){
    FILE *f = fopen(fn, "wb");
    fwrite(triangles, sizeof(tri), n, f);
    fclose(f);
}
*/

int cmp(const void *a, const void *b){
    float x = area(*(tri*)a);
    float y = area(*(tri*)b);
    return(x > y) - (x < y);
}

int main(){
    int n; scanf("%d",&n);
    tri triangles[n];

    for(int i=0; i<n; i++) input(&triangles[i]);

    //writeFile("FPLSP22GxxmsvTG.fpl", triangles, n);

    qsort(triangles, n, sizeof(tri), cmp);

    for(int i=0; i<n; i++) print(triangles[i]);
}
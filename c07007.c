#include <stdio.h>

typedef struct{
    int num,den;
} frac;

int gcd(int a, int b){
    while(b){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b){
    return a*b/gcd(a,b);
}

void simplify(frac *f){
    int g = gcd(f->num, f->den);
    f->num /= g;
    f->den /= g;
}

int main(){
    int t; scanf("%d",&t);
    for(int k = 1; k <= t; k++){
        frac a,b; scanf("%d %d %d %d",&a.num,&a.den,&b.num,&b.den);

        simplify(&a); simplify(&b);

        // Quy đồng:
        int m = lcm(a.den,b.den); // Mẫu chung nhỏ nhất
        frac a1 = {a.num * (m/a.den), m};
        frac b1 = {b.num * (m/b.den), m};

        printf("Case #%d:\n",k);
        printf("%d/%d %d/%d\n",a1.num,a1.den,b1.num,b1.den);

        // Tổng:
        frac sum = {a1.num + b1.num, m};
        simplify(&sum);
        printf("%d/%d\n",sum.num,sum.den);

        // Thương:
        frac quo = {a.num * b.den, a.den * b.num};
        simplify(&quo);
        printf("%d/%d\n",quo.num,quo.den);
    }
}
#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c; scanf("%f%f%f",&a,&b,&c);
    float d = b*b - 4*a*c;
    if(d < 0) printf("NO");
    else if(d==0) printf("%.2f",-b/(2*a));
    else printf("%.2f %.2f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
}
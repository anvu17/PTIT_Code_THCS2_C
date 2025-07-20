#include <stdio.h>
#include <math.h>

typedef struct{
	double x,y;
} Point;

double distance(Point a, Point b){
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int isTriangle(double ab, double bc, double ca){
	return (ab + bc > ca && (ab + ca > bc) && (bc + ca > ab));
} 

double heron(double ab, double bc, double ca){
	double p = (ab + bc + ca) / 2;
	return sqrt(p * (p - ab) * (p - bc) * (p - ca));
}

int main(){
	int t; scanf("%d",&t);
	while(t--){
		Point a,b,c;
		scanf("%lf %lf %lf %lf %lf %lf",&a.x,&a.y,&b.x,&b.y,&c.x,&c.y);
		
		double ab = distance(a,b);
		double bc = distance(b,c);
		double ca = distance(c,a);
		
		if(!isTriangle(ab,bc,ca)) printf("INVALID\n");
		else printf("%.2lf\n",heron(ab,bc,ca));
	}
}

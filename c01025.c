#include <stdio.h>

int min(int a, int b){
    return (a < b) ? a : b;
}

int max(int a, int b){
    return (a > b) ? a : b;
}

int main(){
    // Hình 1: điểm trái dưới (xd1,yd1) và điểm phải trên (xt1,yt1)
    int xd1,yd1,xt1,yt1; scanf("%d %d %d %d",&xd1,&yd1,&xt1,&yt1);
    // Hình 2:
    int xd2,yd2,xt2,yt2; scanf("%d %d %d %d",&xd2,&yd2,&xt2,&yt2);
    
    // Tọa độ điểm trái dưới của hình vuông kích thước nhỏ nhất phủ kín:
    int x_min = min(xd1,xd2);
    int y_min = min(yd1,yd2);
    // Tọa độ điểm phải trên:
    int x_max = max(xt1,xt2);
    int y_max = max(yt1,yt2);
    
    // Chiều rộng, chiều cao vùng phủ:
    int w = x_max - x_min;
    int h = y_max - y_min;
    // Lấy cạnh lớn hơn làm cạnh hình vuông nhỏ nhất thỏa mãn:
    int s = max(w,h);
    
    printf("%d",s*s);
}
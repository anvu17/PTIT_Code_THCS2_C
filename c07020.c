/*
TIẾN HÓA POKEMON:
    Tóm tắt đề bài:
        - Tí có nhiều loại pokemon, mỗi loại có số lượng vô hạn.
        - Mỗi loại cần K[i] viên đá để tiến hóa 1 con.
        - Sau mỗi lần tiến hóa, Tí thu lại về được 2 viên đá.
        - Tìm:
            + Tổng số pokemon tối đa có thể tiến hóa.
            + Loại pokemon được tiến hóa nhiều nhất.
*/

#include <stdio.h>
#include <string.h>

typedef struct{
    char name[100];
    int k,s; // k : số đá cần, s: số đá có
    int cnt; // số lần tiến hóa
} pokemon;

int main(){
    int n,total = 0,maxIdx = 0; scanf("%d",&n);
    pokemon p[70];
    for(int i = 0; i < n; i++){
        // Nhập thông tin:
        scanf("%s %d %d",p[i].name,&p[i].k,&p[i].s);
        // Quá trình tiến hóa:
        p[i].cnt = 0;
        while(p[i].k <= p[i].s){ // còn đủ đá thì:
            p[i].cnt++; // tiến hóa được thêm 1
            p[i].s = p[i].s - p[i].k + 2; // mất k viên, thu 2 viên
        }
        // Tính tổng số pokemon đã tiến hóa và tìm loại được tiến hóa nhiều nhất:
        total += p[i].cnt;
        if(p[i].cnt > p[maxIdx].cnt) maxIdx = i;
    }
    printf("%d\n%s",total,p[maxIdx].name);
}
/*
GHÉP HÌNH:
    Cho 3 hình chữ nhật. Có thể xoay nhưng không thể xếp chồng.
    Hỏi 3 hình đó có thể ghép thành hình vuông hay không.

    Ý tưởng:
        Mỗi hình chữ nhật có thể giữ nguyên như cũ hoặc xoay lại (đổi chiều rộng và chiều cao).
        Có 3 hình, mỗi hình có 2 cách xoay -> Tổng cộng có 2^3 = 8 cách xoay.
        Với mỗi cách xoay, ta thử các kiểu xếp sau:
            + Kiểu 1: Xếp 3 hình nằm ngang:
                +-------+ +----+ +----+
                |       | |    | |    |
                +-------+ +----+ +----+
            Điều kiện tạo thành hình vuông: 3 hình cao bằng nhau; tổng chiều rộng = chiều cao
            + Kiểu 2: Xếp 3 hình chồng lên nhau:
                +-----+
                |     |
                +-----+
                |     |
                +-----+
                |     |
                +-----+
            Điều kiện tạo thành hình vuông: 3 hình rộng bằng nhau; tổng chiều cao = chiều rộng
            + Kiểu 3: 1 hình đi top, 2 hình đi bot nằm cạnh nhau
                +-----------+      
                |           |
                +----+ +----+      
                |    | |    |
                +----+ +----+
            Điều kiện tạo thành hình vuông: 2 hình dưới cao bằng nhau;
                                            2 hình dưới đặt cạnh nhau sao cho rộng đúng bằng hình trên;
                                            tổng chiều cao (hình top + 2 hình bot) = chiều rộng hình trên
        Các bước giải:
            1) Đọc 3 hình.
            2) Thử mọi cách xoay.
            3) Với mỗi cách, kiểm tra 3 kiểu xếp trên.
            4) Nếu có ít nhất 1 kiểu xếp đúng tức là có thể ghép được thành hình vuông.
*/

#include <stdio.h>

typedef struct{
    int w,h;
} rect;

rect r[3];

int squareForming(){
    // Thử tối đa 8 cách xoay:
    for(int x1 = 0; x1 <= 1; x1++) // hình 1
    for(int x2 = 0; x2 <= 1; x2++) // hình 2
    for(int x3 = 0; x3 <= 1; x3++){ // hình 3
        rect a[3];

        if(x1 == 0) a[0] = r[0]; // hình 1 giữ nguyên
        else a[0] = (rect){r[0].h,r[0].w}; // hình 1 xoay

        if(x2 == 0) a[1] = r[1];
        else a[1] = (rect){r[1].h,r[1].w};

        
        if(x3 == 0) a[2] = r[2];
        else a[2] = (rect){r[2].h,r[2].w};

        // Thử các kiểu xếp:

        // ---- Kiểu 1: xếp ngang ba hình ----
        // ĐK: cao bằng nhau; tổng rộng = cao
        if(a[0].h == a[1].h && a[1].h == a[2].h){
            int width = a[0].w + a[1].w + a[2].w;
            if(width == a[0].h) return 1;
        }

        // ---- Kiểu 2: xếp dọc ba hình ----
        // ĐK: rộng bằng nhau; tổng cao = rộng
        if(a[0].w == a[1].w && a[1].w == a[2].w){
            int height = a[0].h + a[1].h + a[2].h;
            if(height == a[0].w) return 1;
        }

        // ---- Kiểu 3: 1 hình trên, 2 hình dưới cạnh nhau ----
        //  ĐK:
        //      - 2 hình dưới cao bằng nhau
        //      - tổng rộng 2 hình dưới = rộng hình trên
        //      - tổng cao (trên + dưới) = rộng hình trên
        for(int top = 0; top < 3; top++){
            // Chọn 2 hình làm bot, khác với top:
            int bot1 = (top + 1) % 3;
            int bot2 = (top + 2) % 3;

            if(a[bot1].h == a[bot2].h &&
               a[bot1].w + a[bot2].w == a[top].w &&
               a[top].h + a[bot1].h == a[top].w){
                return 1;
            }
        }       
    }
    return 0;
}

int main(){
    for(int i = 0; i < 3; i++) scanf("%d %d",&r[i].w,&r[i].h);
    printf("%s\n",squareForming() ? "YES" : "NO");
}

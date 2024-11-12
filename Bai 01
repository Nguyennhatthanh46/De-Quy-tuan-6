#include <iostream>
using namespace std;

int Tinh(int x)
{
    if (x <= 2) return 1;
    return Tinh(x - 2) + Tinh(x - 3);
}

int main()
{
    cout << Tinh(10);
    return 0;
}


/*
int Tinh(int x)
{
    if (x <= 2) return 1;
    return Tinh(x - 2) + Tinh(x - 3);
}

-"int Tinh(int x)": Đây là khai báo của hàm Tinh với tham số x kiểu int. Hàm này trả về một giá trị kiểu int.

-"if (x <= 2) return 1;": Câu lệnh điều kiện này kiểm tra nếu x nhỏ hơn hoặc bằng 2. Nếu điều kiện này đúng, hàm sẽ trả về giá trị 1 và dừng lại.

-"return Tinh(x - 2) + Tinh(x - 3);": Nếu x lớn hơn 2, hàm sẽ gọi lại chính nó hai lần (đây là đệ quy).
+Tinh(x - 2): Gọi lại hàm với tham số x trừ đi 2.
+Tinh(x - 3): Gọi lại hàm với tham số x trừ đi 3.
Kết quả trả về là tổng của hai lần gọi hàm này.

*Phân tích quá trình đệ quy của Tinh(10)
-Hàm Tinh thực hiện các phép tính theo công thức:
+Nếu x <= 2, trả về 1.
+Nếu x > 2, trả về Tinh(x - 2) + Tinh(x - 3).
-Với Tinh(10), quá trình đệ quy sẽ diễn ra như sau:
>Tinh(10) = Tinh(8) + Tinh(7)
>Để tính Tinh(8), ta lại thực hiện: Tinh(8) = Tinh(6) + Tinh(5)
>Để tính Tinh(7), ta lại thực hiện: Tinh(7) = Tinh(5) + Tinh(4)
>Và tiếp tục như vậy cho đến khi đạt được các giá trị x <= 2.

KẾT QUẢ: 12
*/

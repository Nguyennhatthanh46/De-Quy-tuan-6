#include <iostream> 
using namespace std;
void hamf (int x, int &y){
x = x*y;
y = x/y;
x = x / y;
}
int main()
{
int x = 2, y = 1;
hamf(x, y);
cout << "x = "<< x << "\t";
cout << "y = "<< y;
return 0;
}

/*
Tham số x được truyền theo giá trị, có nghĩa là bất kỳ thay đổi nào với x trong hamf chỉ áp dụng trong phạm vi của hàm và sẽ không ảnh hưởng đến x trong main.
Tham số y được truyền theo tham chiếu, nên mọi thay đổi của y trong hamf sẽ ảnh hưởng đến biến y trong main.

Trong hàm hamf, các dòng lệnh thực hiện như sau:

x = x * y; → x sẽ lấy giá trị x * y (2 * 1 = 2).
y = x / y; → y được gán giá trị x / y (2 / 1 = 2).
x = x / y; → x được gán giá trị x / y (2 / 2 = 1).
Sau khi thực hiện các lệnh này, giá trị của x trong hàm hamf là 1 và giá trị của y là 2.

Kết quả:
Sau khi gọi hamf, giá trị của x trong main vẫn là 2 (không thay đổi).
Giá trị của y trong main đã được thay đổi thành 2 theo tính toán trong hàm hamf.

KẾT QUẢ: 
x = 2
y = 2
*/

#include <iostream> 
using namespace std;
int Tong(int x)
{
if (x == 0) return 1;
return x*Tong (x - 1); 
}
int main()
{
cout << Tong (5); 
return 0;
}


/*
Định nghĩa hàm "Tong":

Hàm Tong nhận tham số x và sử dụng đệ quy để tính toán.
-Nếu x == 0, hàm trả về 1 (điều kiện dừng của đệ quy).
-Nếu x khác 0, hàm trả về giá trị x * Tong(x - 1), tức là nhân x với kết quả của Tong(x - 1). Đây là công thức tính giai thừa.

Hàm main:
Quá trình đệ quy của Tong(5):
-Tong(5) gọi 5 * Tong(4)
-Tong(4) gọi 4 * Tong(3)
-Tong(3) gọi 3 * Tong(2)
-Tong(2) gọi 2 * Tong(1)
-Tong(1) gọi 1 * Tong(0)
-Tong(0) trả về 1 (điều kiện dừng).

Kết quả tính toán giai thừa:
5*4*3*2*1*1=120.

KẾT QUẢ: 120
*/

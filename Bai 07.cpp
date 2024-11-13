#include <iostream>
using namespace std;
int Tinh (int m, int n)
{
if (m == 0)
return (n + 1);
else
{
if (n == 0)
return Tinh (m - 1, 1);
else
return Tinh (m - 1, Tinh (m, n - 1));
}
}
int main()
{
cout << Tinh (2,2);
return 0;
}


/*
Bước 1: Gọi Tinh(2,2)
m = 2 và n = 2 (cả m và n đều khác 0).
Áp dụng công thức: Tinh(2,2) = Tinh(1, Tinh(2,1)).

Bước 2: Tính Tinh(2,1)
m = 2 và n = 1 (cả m và n đều khác 0).
Áp dụng công thức: Tinh(2,1) = Tinh(1, Tinh(2,0)).

Bước 3: Tính Tinh(2,0)
m = 2 và n = 0 (m khác 0, nhưng n bằng 0).
Áp dụng công thức: Tinh(2,0) = Tinh(1,1).

Bước 4: Tính Tinh(1,1)
m = 1 và n = 1 (cả m và n đều khác 0).
Áp dụng công thức: Tinh(1,1) = Tinh(0, Tinh(1,0)).

Bước 5: Tính Tinh(1,0)
m = 1 và n = 0 (m khác 0, nhưng n bằng 0).
Áp dụng công thức: Tinh(1,0) = Tinh(0,1).

Bước 6: Tính Tinh(0,1)
m = 0, vì vậy trả về n + 1 = 1 + 1 = 2.
Kết quả của Tinh(1,0):
Từ bước 5, ta có: Tinh(1,0) = 2.

Bước 7: Quay lại Tinh(1,1) = Tinh(0, Tinh(1,0))
Thay giá trị của Tinh(1,0) = 2 vào:
Tinh(1,1) = Tinh(0,2).

Bước 8: Tính Tinh(0,2)
m = 0, vì vậy trả về n + 1 = 2 + 1 = 3.
Kết quả của Tinh(1,1):
Từ bước 7, ta có: Tinh(1,1) = 3.
Kết quả của Tinh(2,0):
Từ bước 3, ta có: Tinh(2,0) = 3.

Bước 9: Quay lại Tinh(2,1) = Tinh(1, Tinh(2,0))
Thay giá trị của Tinh(2,0) = 3 vào:
Tinh(2,1) = Tinh(1,3).

Bước 10: Tính Tinh(1,3)
m = 1 và n = 3 (cả m và n đều khác 0).
Áp dụng công thức: Tinh(1,3) = Tinh(0, Tinh(1,2)).

Bước 11: Tính Tinh(1,2)
m = 1 và n = 2 (cả m và n đều khác 0).
Áp dụng công thức: Tinh(1,2) = Tinh(0, Tinh(1,1)).

Bước 12: Tính Tinh(1,1) (đã tính ở bước trên)
Từ bước 8, ta đã có: Tinh(1,1) = 3.
Thay giá trị này vào: Tinh(1,2) = Tinh(0,3).

Bước 13: Tính Tinh(0,3)
m = 0, vì vậy trả về n + 1 = 3 + 1 = 4.
Kết quả của Tinh(1,2):
Từ bước 12, ta có: Tinh(1,2) = 4.

Bước 14: Quay lại Tinh(1,3) = Tinh(0, Tinh(1,2))
Thay giá trị của Tinh(1,2) = 4 vào:
Tinh(1,3) = Tinh(0,4).

Bước 15: Tính Tinh(0,4)
m = 0, vì vậy trả về n + 1 = 4 + 1 = 5.
Kết quả của Tinh(1,3):
Từ bước 14, ta có: Tinh(1,3) = 5.
Kết quả của Tinh(2,1):
Từ bước 9, ta có: Tinh(2,1) = 5.

Bước 16: Quay lại Tinh(2,2) = Tinh(1, Tinh(2,1))
Thay giá trị của Tinh(2,1) = 5 vào:
Tinh(2,2) = Tinh(1,5).

Bước 17: Tính Tinh(1,5)
m = 1 và n = 5 (cả m và n đều khác 0).
Áp dụng công thức: Tinh(1,5) = Tinh(0, Tinh(1,4)).

Bước 18: Tính Tinh(1,4)
Sử dụng quy trình tương tự các bước trên, ta tính được Tinh(1,4) = 6.
Kết quả cuối cùng của Tinh(2,2):
Từ bước 16, thay giá trị Tinh(1,4) = 6 vào, ta có Tinh(2,2) = 7.

KẾT QUẢ: 7
*/

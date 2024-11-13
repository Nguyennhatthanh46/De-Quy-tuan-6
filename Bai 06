#include <iostream>
using namespace std;

int Tinh(int x) {
    if (x == 1) return 1;
    int kq = 10;
    for (int i = 1; i < x; i++) 
        kq += Tinh(i);
    return kq;
}

int main() {
    cout << Tinh(3);
    return 0;
}


/*
1.Gọi hàm Tinh(3) trong hàm main:
Gọi hàm Tinh với tham số x = 3.

2.Chạy hàm Tinh(3):
Hàm kiểm tra điều kiện if (x == 1). Vì x không phải là 1 (mà là 3), nên bỏ qua và tiếp tục.
kq được khởi tạo với giá trị 10.
Vòng for (int i = 1; i < x; i++) bắt đầu chạy, nghĩa là i sẽ nhận các giá trị từ 1 đến 2 (vì x = 3).

3.Vòng lặp for trong Tinh(3):
Vòng lặp với i = 1:
Trong Tinh(1): vì x == 1, nên hàm trả về 1.
Giá trị 1 được cộng vào kq, nên kq trở thành 10 + 1 = 11.
Vòng lặp với i = 2.

4.Chạy hàm Tinh(2):
Hàm kiểm tra điều kiện if (x == 1), không thỏa (vì x = 2).

kq được khởi tạo với giá trị 10.
Vòng for (int i = 1; i < x; i++) trong Tinh(2) sẽ lặp với i = 1.

Vòng lặp với i = 1 trong Tinh(2):

Gọi Tinh(1).
Trong Tinh(1): trả về 1.
Giá trị 1 được cộng vào kq, nên kq của Tinh(2) trở thành 10 + 1 = 11.
Kết thúc for trong Tinh(2), hàm Tinh(2) trả về 11.

5.Quay lại hàm Tinh(3):
Giá trị trả về 11 của Tinh(2) được cộng vào kq trong Tinh(3), làm cho kq của Tinh(3) trở thành 11 + 11 = 22.
Hàm Tinh(3) trả về 22.

KẾT QUẢ: 22.
* ĐỐI VỚI Tong(4).... thì hệ số nhân đôi lên cho vòng lập đội lên gấp đôi.
4->44
5->88
6->176..
*/

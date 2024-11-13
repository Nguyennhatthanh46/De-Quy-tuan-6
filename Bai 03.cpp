#include <iostream>
using namespace std; 
int nhap_so_duong(){
int n;
do {
cout << "Nhap mot so nguyen duong ";
cin >> n;
} while (n <= 0);
return n;
}
int main()
{
int a = nhap_so_duong();
cout << "So vua nhap la "<< a << endl;
cout << "Tong hai so la "<< a + nhap_so_duong() << endl;
return 0;
}

/*
Bước 1: Chạy chương trình
Khi chương trình bắt đầu chạy, hàm main sẽ được gọi đầu tiên.

Bước 2: Gọi hàm nhap_so_duong lần đầu tiên
-Câu lệnh: int a = nhap_so_duong();
-Lệnh này gọi hàm nhap_so_duong và gán giá trị trả về của hàm vào biến a.
-Vào hàm nhap_so_duong, biến n được khai báo để lưu giá trị người dùng nhập.

Bước 3: Thực hiện vòng lặp do-while trong hàm nhap_so_duong
-Bên trong hàm nhap_so_duong:
-Lệnh cout: Chương trình in ra dòng chữ: "Nhap mot so nguyen duong: ".
-Lệnh cin: Chờ người dùng nhập một số nguyên.
-Vòng lặp do-while: Sau khi người dùng nhập giá trị, vòng lặp sẽ kiểm tra xem giá trị đó có phải là số nguyên dương hay không.
+Nếu người dùng nhập một số nhỏ hơn hoặc bằng 0, vòng lặp sẽ chạy lại và yêu cầu nhập lại.
+Nếu người dùng nhập một số lớn hơn 0, vòng lặp kết thúc, và hàm nhap_so_duong trả về giá trị này.

Bước 4: Gán giá trị trả về của nhap_so_duong cho a
-Quay lại hàm main: Giá trị người dùng vừa nhập (số nguyên dương) sẽ được gán cho biến a.

Bước 5: Hiển thị giá trị của a
Câu lệnh: cout << "So vua nhap la " << a << endl;
Lệnh này in ra giá trị của a để thông báo cho người dùng số họ vừa nhập, với kết quả ví dụ như sau:

"So vua nhap la 5"

Bước 6: Gọi lại hàm nhap_so_duong lần thứ hai
-Câu lệnh: cout << "Tong hai so la " << a + nhap_so_duong() << endl;
-Lệnh này tính tổng của a và kết quả trả về từ một lần gọi khác của hàm nhap_so_duong.
-Hàm nhap_so_duong lại được gọi và thực hiện giống như lần đầu tiên, yêu cầu người dùng nhập một số nguyên dương mới.

Bước 7: Tính tổng và hiển thị kết quả
Sau khi người dùng nhập số nguyên dương lần thứ hai, giá trị này sẽ được cộng với a.
Câu lệnh: cout << "Tong hai so la " << a + nhap_so_duong() << endl;
Tổng của a và số mới nhập sẽ được in ra với thông báo Tong hai so la.
Ví dụ, nếu a = 5 và số nhập lần hai là 8, kết quả sẽ là:

"Tong hai so la 12"

*/

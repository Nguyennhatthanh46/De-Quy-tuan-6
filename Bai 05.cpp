#include <iostream>
using namespace std;
void find (int a, int& b, int& c)
{
int temp;
c=a+b;
temp =a;
a = b;
b = 2*temp;
}
int main()
{
int one, two, three;
one = 5;
two = 10;
three = 15;
find (three, two, one);
cout << one << "," << two << "," << three << endl;
return 0;
}

/*
Hàm main thực hiện phép gán cái giá trị three, two, one vào hàm void.
Tại đây các biến int a, int& b, in& c chỉ thực hiện các công việc tính toán.
Nhưng sau cùng, chỉ có biến three không được trả về giá trị vì nó không được truyền tham chiếu.
a trong hàm void được gán giá trị của b và kết thúc công việc của nó. Nó không trả về giá trị cho biến three. 
Chỉ có b và c thực hiện được và trả về.

KẾT QUẢ: 25,30,15
*/

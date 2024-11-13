#include <iostream>
using namespace std;

int f(int x)
{
    x++;
    return x;
}

int g(int &x)
{
    x++;
    return x;
}

int main()
{
    int a = 20;
    cout << f(a) << ' ' << a << endl;

    int b = 19;
    cout << g(b) << ' ' << b << endl;

    return 0;
}

/*
Hàm f(int x):
Tham số x là một biến cục bộ được truyền bằng giá trị, có nghĩa là nó là một bản sao của biến truyền vào.
x++ tăng x lên 1 nhưng chỉ ảnh hưởng đến bản sao, không ảnh hưởng đến giá trị của biến ban đầu.
Nên f(a) vẫn tăng 1.

Hàm g(int &x):
Tham số x được truyền vào bằng tham chiếu, có nghĩa là nó tham chiếu trực tiếp đến biến gốc truyền vào hàm.
x++ sẽ tăng giá trị của biến gốc lên 1.
Và f(b) tăng 1.

KẾT QUẢ: 
21 20
20 20
*/

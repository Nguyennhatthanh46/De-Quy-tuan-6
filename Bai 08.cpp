using namespace std; 

 void hoanvi(int *px, int *py)

{

     int z;

     z = *px;

     *px = *py;

     *py = z;

}

int main()

{

     int a = 15, b = 21;

     hoanvi(a, b);

     cout << a << b;

     return 0;

/*
KẾT QUẢ: Lỗi
Hàm hoanvi nhận hai con trỏ int *px và int *py, tức là nó nhận địa chỉ của hai biến nguyên int.
Biến z tạm thời lưu giá trị của *px (giá trị của biến px trỏ tới).
Sau đó, *px được gán giá trị của *py, và *py nhận giá trị ban đầu của *px thông qua biến z.
Kết quả là giá trị của hai biến mà px và py trỏ tới được hoán đổi.

Biến a được gán giá trị 15, và b được gán giá trị 21.
Chương trình cố gắng gọi hàm hoanvi(a, b);, 
nhưng đây là lỗi vì hoanvi yêu cầu hai tham số là con trỏ (int *px và int *py), trong khi a và b chỉ là các biến int.

Khi gọi đúng với "hoanvi(&a, &b);", địa chỉ của a và b sẽ được truyền vào hàm, 
và các giá trị 15 và 21 sẽ được hoán đổi, tức là sau khi gọi hoanvi, a sẽ là 21 và b sẽ là 15.

*/

Câu B1:

Khi gán p3 = &d;, p3 trỏ tới d. Vì vậy, *p3 sẽ là 'B', và p3 sẽ trỏ tới địa chỉ 0x5678.
Khi gán p3 = p1;, p3 trỏ tới c. Vì vậy, *p3 sẽ là 'A', và p3 sẽ trỏ tới địa chỉ 0x1234.
Khi gán *p1 = *p2;, giá trị của c sẽ được thay đổi thành 'B'.
Sau cùng, *p1 sẽ là 'B', và p1 vẫn trỏ tới địa chỉ 0x1234.

*p3 = B, p3 = 0x5678
*p3 = A, p3 = 0x1234
*p1 = B, p1 = 0x1234

Câu B2: 
Trong số các lệnh dưới đây, chỉ có lệnh *p = 5; sẽ gán cho biến i giá trị 5.

Câu B3:
Lỗi trong đoạn mã trên xuất phát từ việc gán một con trỏ kiểu double (double *) vào một biến kiểu char (char).
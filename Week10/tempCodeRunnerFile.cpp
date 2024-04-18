    char* c = a + 3;                // Con trỏ c trỏ tới phần tử thứ 4 của mảng a
    for (int i = 0; i < 9; i++) a[i] = 'a'; // Gán giá trị 'a' cho các phần tử của mảng a (lưu ý là chỉ gán cho 9 phần tử, không bao gồm phần tử cuối cùng để chứa ký tự kết thúc chuỗi '\0')
    a[9] = '\0';                    // Đặt ký tự kết thúc chuỗi '\0' vào phần tử cuối cùng của mảng a
    cerr << "a: " << "-" << a << "-" << endl; // In ra giá trị của mảng a
    cerr << "c: " << "-" << c << "-" << endl; // In ra giá trị của con trỏ c (lưu ý là c trỏ tới một phần của mảng a, không phải chuỗi hoàn chỉnh)
    delete c;                       // Giải phóng bộ nhớ mà con trỏ c trỏ tới
    cerr << "a after deleting c:" << "-" << a << "-" << endl; // Lỗi: Đoạn này sẽ in ra một ký tự rác hoặc không đoán trước được vì đã giải phóng một phần của mảng a bằng cách delete c, nhưng con trỏ a vẫn trỏ vào vùng nhớ đã bị giải phóng.

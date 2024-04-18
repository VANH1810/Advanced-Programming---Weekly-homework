#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // Khởi tạo mảng 2 chiều theo cách 1
    char daytab1[2][12] = {
        {31,28,31,30,31,30,31,31,30,31,30,31},
        {31,29,31,30,31,30,31,31,30,31,30,31}
    };

    // In mảng thành dạng bảng 2 dòng 12 cột
    cout << "Array 1:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 12; j++) {
            cout << (int)daytab1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Thử chỉ khởi tạo một phần của mảng
    char daytab1_partial[2][12] = {
        {31,28,31,30},
        {31,29,31,30}
    };

    cout << "Partial Array 1:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << (int)daytab1_partial[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Thử bỏ giá trị kích thước trong khai báo mảng
    char daytab1_no_size[][12] = {
        {31,28,31,30,31,30,31,31,30,31,30,31},
        {31,29,31,30,31,30,31,31,30,31,30,31}
    };

    cout << "Array 1 (No Size Specified):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 12; j++) {
            cout << (int)daytab1_no_size[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Khởi tạo mảng 2 chiều theo cách 2
    char daytab2[2][12] = {
        31,28,31,30,31,30,31,31,30,31,30,31,
        31,29,31,30,31,30,31,31,30,31,30,31
    };

    // In mảng thành dạng bảng 2 dòng 12 cột
    cout << "Array 2:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 12; j++) {
            cout << (int)daytab2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Thử chỉ khởi tạo một phần của mảng
    char daytab2_partial[2][12] = {
        31,28,31,30,
        31,29,31,30
    };

    cout << "Partial Array 2:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << (int)daytab2_partial[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Thử bỏ giá trị kích thước trong khai báo mảng
    char daytab2_no_size[][12] = {
        31,28,31,30,31,30,31,31,30,31,30,31,
        31,29,31,30,31,30,31,31,30,31,30,31
    };

    cout << "Array 2 (No Size Specified):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 12; j++) {
            cout << (int)daytab2_no_size[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}

/*
Array 1:
31 28 31 30 31 30 31 31 30 31 30 31
31 29 31 30 31 30 31 31 30 31 30 31 

Partial Array 1:
31 28 31 30
31 29 31 30

Array 1 (No Size Specified):
31 28 31 30 31 30 31 31 30 31 30 31
31 29 31 30 31 30 31 31 30 31 30 31

Array 2:
31 28 31 30 31 30 31 31 30 31 30 31 
31 29 31 30 31 30 31 31 30 31 30 31

Partial Array 2:
31 28 31 30 
0 0 0 0

Array 2 (No Size Specified):
31 28 31 30 31 30 31 31 30 31 30 31
31 29 31 30 31 30 31 31 30 31 30 31
*/
#include <iostream>
#include <cstring>

using namespace std;

// Khai báo mảng C-string ngoài hàm main
char array1[5]; 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //char array1[5];

    //char array2[3] = "abc"; // Lỗi: không đủ chỗ để lưu kí tự '\0'
    char array3[6] = "abcde";
    char array4[] = "abcd";

 
    for (int i = 0; i < 5; i++) {
        cout << array1[i];
    }
    cout << endl;
    cout << "Size of array1: " << sizeof(array1) << endl;

    for (int i = 0; i < 6; i++) {
        cout << array3[i];
    }
    cout << endl;
    cout << "Size of array3: " << sizeof(array3) << endl;

    for (int i = 0; i < 4; i++) {
        cout << array4[i];
    }
    cout << endl;
    cout << "Size of array4: " << sizeof(array4) << endl;

    return 0;
}

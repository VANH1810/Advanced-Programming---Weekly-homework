#include <iostream>

using namespace std;

// Khai báo mảng ngoài hàm main
int array1[5]; 

// Khai báo và khởi tạo mảng trong hàm main
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int array2[3] = {1, 2, 3};
    int array3[6] = {1, 2, 3, 4, 5, 6};
    int array4[] = {1, 2, 3, 4};
    int array5[] = {1, 2, 3, 4};

    for (int i = 0; i < 5; i++) {
        cout << array1[i] << " ";
    }
    cout << '\n';
    for (int i = 0; i < 3; i++) {
        cout << array2[i] << " ";
    }
    cout << '\n';
    for (int i = 0; i < 6; i++) {
        cout << array3[i] << " ";
    }
    cout << '\n';
    for (int i = 0; i < 4; i++) {
        cout << array4[i] << " ";
    }
    cout << '\n';
    for (int i = 0; i < 4; i++) {
        cout << array5[i] << " ";
    }
    cout << '\n';
    

    return 0;
}

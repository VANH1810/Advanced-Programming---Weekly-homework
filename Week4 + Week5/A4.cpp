#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char array[5];
    char var1, var2;

    // Đọc tràn mảng
    cout << "Reading overflow:" << endl;
    for (int i = -1; i <= 6; i++) {
        array[i] = 'A' + i;
        cout << "array[" << i << "]: " << array[i] << endl;
    }
    cout << endl;

    // Thay đổi thứ tự khai báo
    cout << "Changing declaration order:" << endl;
    char var3;
    char array2[5];
    for (int i = -1; i <= 6; i++) {
        array2[i] = 'A' + i;
        cout << "array2[" << i << "]: " << array2[i] << endl;
    }
    cout << endl;

    // Ghi tràn mảng
    cout << "Writing overflow:" << endl;
    for (int i = 0; i <= 5; i++) {
        array[i] = 'A' + i;
    }

    // Tràn mảng 2 chiều
    char array2d[3][4];
    cout << "2D array before overflow:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            array2d[i][j] = 'A' + j;
            cout << array2d[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
/*
Reading overflow:
array[-1]: @
array[0]: A
array[1]: B
array[2]: C
array[3]: D
array[4]: E
array[5]: F
array[6]: G

Changing declaration order:
array2[-1]: @
array2[0]: A
array2[1]: B
array2[2]: C
array2[3]: D
array2[4]: E
array2[5]: F
array2[6]: G

2D array before overflow:
A B C D E F
A B C D E F
A B C D E F
*/
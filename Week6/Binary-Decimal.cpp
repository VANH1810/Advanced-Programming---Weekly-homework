#include <iostream>
#include <string>

using namespace std;


string decimalToBinary(int n) {
    if (n == 0) return "0";

    string binary = "";
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }
    return binary;
}

int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 1;
    for (int i = binary.length() - 1; i >= 0; --i) {
        if (binary[i] == '1') {
            decimal += power;
        }
        power *= 2;
    }
    return decimal;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int decimalNum;
    cin >> decimalNum;

    string binaryNum_res = decimalToBinary(decimalNum);
    cout << binaryNum_res << endl;

    string binaryNum;
    cin >> binaryNum;

    int decimalNum_res = binaryToDecimal(binaryNum);
    cout << decimalNum_res << endl;
    return 0;
}

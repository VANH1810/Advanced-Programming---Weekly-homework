#include <bits/stdc++.h>
using namespace std;
string addStrings(string& num1, string& num2) {
    string result;
    
    int carry = 0;
    int i = num1.length() - 1;
    int j = num2.length() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        sum %= 10;

        result.push_back(sum + '0');

        i--;
        j--;
    }

    reverse(result.begin(), result.end());
    result += '\0';
    return result;
}

int main() {
    string num1;
    
    string num2;

    cin >> num1 >> num2;
    
    string sum;
    sum = addStrings(num1, num2);
    sum += '\0';
    cout << sum;
}
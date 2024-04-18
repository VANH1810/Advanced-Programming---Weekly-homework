#include <iostream>
#include <cstring>
const int maxLength = 100;
using namespace std;

bool isPalindrome(const char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false; 
        }
    }
    return true; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    char str[maxLength + 1]; 
    cin.getline(str, maxLength + 1);

    
    if (isPalindrome(str)) 
        cout << "Yes";
    else 
        cout << "No";

    return 0;
}

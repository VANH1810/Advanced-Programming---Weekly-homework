#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(int num) {
    string str = to_string(num);
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T; 

    while(T--) {
        int A, B;
        cin >> A >> B; 

        int count = 0;
        for (int i = A; i <= B; ++i) {
            if (isPalindrome(i)) {
                count++;
            }
        }


        cout << count << '\n';
    }

    return 0;
}

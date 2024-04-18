#include <iostream>
#include <cstring>
const int N = 3; 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    char str[N]; 
    cin >> str;
    cout << "_" << str << "_"; // In chuỗi với dấu '_' đánh dấu đầu và cuối

    return 0;
}

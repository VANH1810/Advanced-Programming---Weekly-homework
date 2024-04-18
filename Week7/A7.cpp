#include <iostream>
#include <cstring> // Để sử dụng hàm strcmp
using namespace std;

int count_occurrences(const char* str1, const char* str2) {
    int count = 0;
    int len1 = strlen(str1);
    int len2 = strlen(str2);


    for (int i = 0; i <= len2 - len1; ++i) {
        
        if (strncmp(str1, str2 + i, len1) == 0) {
            count++;
        }
    }
    return count;
}

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen(taskname".in","r",stdin);
    //freopen(taskname".out","w",stdout);

    if (argc != 3) { 
        return 1;
    }

    const char* str1 = argv[1]; 
    const char* str2 = argv[2]; 

    int cnt = count_occurrences(str1, str2); 

    cout << cnt << endl;

    return 0;
}

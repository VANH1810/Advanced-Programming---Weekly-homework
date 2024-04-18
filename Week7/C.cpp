#include <iostream>
using namespace std;


int strlen(const char* str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

void reverse(char a[]) {
    int len = strlen(a);
    for (int i = 0; i < len / 2; i++) {
        char temp = a[i];
        a[i] = a[len - i - 1];
        a[len - i - 1] = temp;
    }
}


void delete_char(char a[], char c) {
    int len = strlen(a);
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (a[i] != c) {
            a[j] = a[i];
            j++;
        }
    }
    a[j] = '\0';
}


void pad_right(char a[], int n) {
    int len = strlen(a);
    if (len >= n) return;
    for (int i = len; i < n; i++) {
        a[i] = ' ';
    }
    a[n] = '\0';
}


void pad_left(char a[], int n) {
    int len = strlen(a);
    if (len >= n) return;
    int num_spaces = n - len;
    for (int i = len - 1; i >= 0; i--) {
        a[i + num_spaces] = a[i];
    }
    for (int i = 0; i < num_spaces; i++) {
        a[i] = ' ';
    }
}


void truncate(char a[], int n) {
    int len = strlen(a);
    if (len <= n) return;
    a[n] = '\0';
}


bool is_palindrome(char a[]) {
    int len = strlen(a);
    for (int i = 0; i < len / 2; i++) {
        if (a[i] != a[len - i - 1]) {
            return false;
        }
    }
    return true;
}


void trim_left(char a[]) {
    int len = strlen(a);
    int i = 0;
    while (a[i] == ' ') {
        i++;
    }
    for (int j = 0; j < len - i; j++) {
        a[j] = a[j + i];
    }
    a[len - i] = '\0';
}


void trim_right(char a[]) {
    int len = strlen(a);
    int i = len - 1;
    while (a[i] == ' ') {
        i--;
    }
    a[i + 1] = '\0';
}

// Hàm in xâu
void print_string(const char* str) {
    cout << str << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen(taskname".in","r",stdin);
    //freopen(taskname".out","w",stdout);
    char a[] = "hello   ";
    char b[] = "racecar";
    char c[] = "  example ";
    
    
    print_string(a);

    reverse(a);
    cout << "String after reverse: ";
    print_string(a);

    delete_char(b, 'r');
    cout << "String after delete char r': ";
    print_string(b);

    pad_right(c, 10);
    cout << "String after being padded right: ";
    print_string(c);

    char d[] = "  hi";
    pad_left(d, 6);
    cout << "String after being padded left: ";
    print_string(d);

    char e[] = "abcdefgh";
    truncate(e, 5);
    cout << "string after being truncated ";
    print_string(e);

    cout << "String Palindrome test: ";
    print_string(b);
    if (is_palindrome(b)) {
        cout << "Is palindrome" << endl;
    } else {
        cout << "Not palindrome" << endl;
    }

    trim_left(c);
    cout << "String after being filtered left: ";
    print_string(c);

    trim_right(c);
    cout << "String after being filtered right: ";
    print_string(c);

    return 0;
}

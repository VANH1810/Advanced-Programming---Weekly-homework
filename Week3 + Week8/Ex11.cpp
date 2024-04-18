#include <bits/stdc++.h>
using namespace std;

struct String {
    int n; 
    char* str; 


    String(const char* s) {
        n = strlen(s); 
        str = new char[n + 1]; 
        strcpy(str, s); 
    }


    ~String() {
        delete[] str; 
    }

    void print() const {
        cout << str;
    }
    void append(const char* s) {
        int len = strlen(s); 
        char* temp = new char[n + len + 1]; 

        strcpy(temp, str); 
        strcat(temp, s);
        delete[] str;
        str = temp; 
        
        n += len; 
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen(taskname".in","r",stdin);
    //freopen(taskname".out","w",stdout);
    
    String greeting("Hello");
    greeting.print();
    cout << endl;


    greeting.append(" world!");
    greeting.print();
    cout << endl;

    return 0;
}

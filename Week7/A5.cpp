#include <iostream>
using namespace std;

char* weird_string() {
    char c[] = "123345"; 
    return c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen(taskname".in","r",stdin);
    //freopen(taskname".out","w",stdout);
    
    char* ptr = weird_string();
    cout << ptr << endl;
    return 0;
}

/*
A5.cpp: In function 'char* weird_string()':
A5.cpp:5:10: warning: address of local variable 'c' returned [-Wreturn-local-addr]
     char c[] = "123345";
*/
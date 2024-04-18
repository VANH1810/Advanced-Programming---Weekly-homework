#include <iostream>
using namespace std;


template<typename T, size_t N>

void f(T (&arr)[N]) { 
    cout << "Size of the array inside of f: " << sizeof(arr) / sizeof(arr[0]) << endl; 
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen(taskname".in","r",stdin);
    //freopen(taskname".out","w",stdout);
    int A[] = {1, 2, 3, 4, 5};

    cout << "Size of the array outside of f: " << sizeof(A) / sizeof(A[0]) << endl;

    f(A);

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    
    if (n >= 100) {
        return 1;
    }

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            int value = (i + j) % n + 1;
            cout << setw(3) << value;
        }
        cout << endl;
    }

    return 0;
}

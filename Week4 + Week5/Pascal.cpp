#include <iostream>
using namespace std;
const int maxN = 1e2+1;

int factorial(int n) 
{
    if (n == 0 || n == 1)
        return 1;
    else 
        return n * factorial(n - 1);
}

int combination(int n, int k) 
{
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) 
    {
      
        for (int j = 0; j < n - i - 1; j++) 
            cout << "   ";
        
        for (int j = 0; j <= i; j++) 
            cout << combination(i, j) << "  ";
        
        cout << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;


bool isPrime(int n) 
{
    if (n <= 1) 
    {
        return false; 
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false; 
        }
    }
    return true; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;

    if(isPrime(N)) cout << "YES";
    else cout << "NO";

    return 0;
}

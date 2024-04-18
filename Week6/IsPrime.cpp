#include <iostream>

using namespace std;


bool isPrime(int n) {
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

void printPrimes(int N) {
    cout << "Prime numbers less than " << N << " are:" << endl;
    for (int i = 2; i < N; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;

    printPrimes(N);

    return 0;
}

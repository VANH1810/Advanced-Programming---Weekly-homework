#include <iostream>
#include <cstdlib> 

using namespace std;

int randomLessThanN(int N) {
    return rand() % N;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int randomNum = randomLessThanN(N);
    cout << randomNum << endl;
    
    return 0;
}

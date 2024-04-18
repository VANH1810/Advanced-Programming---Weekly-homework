#include <iostream>

using namespace std;


int roundNumber(double num) {
    return (int)(num + 0.5);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double num;
    cin >> num;

    int roundedNum = roundNumber(num);
    cout << roundedNum << endl;

    return 0;
}

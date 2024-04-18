#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    int prev = 0;

    while (true) {
        cin >> num;
        if (num < 0) {
            break;
        }

        if (num != prev) {
            cout << num << " ";
        }

        prev = num;
    }

    cout << endl;
    return 0;
}

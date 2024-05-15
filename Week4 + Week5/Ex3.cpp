#include <bits/stdc++.h> 
using namespace std;
const int maxN = 10;
int main() {
    
    int countArray[maxN] = {0};
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) 
    {
        int num;
        cin >> num;

        if (num < 0 || num > 9) 
            return 1;
        countArray[num]++;
    }

    for (int i = 0; i < maxN; ++i) {
        cout << "Number " << i << ": " << countArray[i] << endl;
    }

    return 0;
}

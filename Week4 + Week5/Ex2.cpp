#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
   
    cin >> N;


    int minElement = INT_MAX; 
    int maxElement = INT_MIN;
    int sumEven = 0; 
    int countOdd = 0;

    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        if (num < minElement) 
            minElement = num;
        
        if (num > maxElement) 
            maxElement = num;

        if (num % 2 == 0) 
            sumEven += num;
        
        else 
            countOdd++;
        
    }

   
    cout << minElement << endl;
    cout << maxElement << endl;
    cout << sumEven << endl;
    cout << countOdd << endl;

    return 0;
}

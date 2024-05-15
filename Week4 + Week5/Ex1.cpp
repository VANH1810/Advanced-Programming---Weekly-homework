#include <bits/stdc++.h>
using namespace std;
const int maxN = 100;   
int main() {
    int n;
    cin >> n;


    double sum = 0.0;
    double sumSquareDiff = 0.0;

    for (int i = 0; i < n; ++i) 
    {
        double tem;
        cin >> tem;
        sum += tem;
        sumSquareDiff += tem * tem;
    }

    double mean = sum / n; 
    double variance = sumSquareDiff / n - mean * mean;

    cout << "(mean): " << mean << endl;
    cout << "(variance): " << variance << endl;

    return 0;
}

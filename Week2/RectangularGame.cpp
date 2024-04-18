#include <bits/stdc++.h>
const int MAX_SIZE = 1000000 + 1;
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    long long a = MAX_SIZE, b = MAX_SIZE, c, d;
     
    cin>>t;
    while (t--) {
        cin >>c >> d;
 
        a = min(a, c);
        b = min(b, d);
    }
    cout << a*b;
     
    return 0;
}

// https://www.hackerrank.com/challenges/rectangular-game/submissions/code/379389267
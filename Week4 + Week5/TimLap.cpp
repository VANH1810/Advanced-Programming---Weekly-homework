#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e5 + 10;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, a[maxN];
    bool seen[maxN] = {false};
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(seen[a[i]]) 
        {
            cout << "YES\n";
            exit(0);
        }
        seen[a[i]] = true;
    } 
    cout << "NO\n";  
    
    return 0;
}
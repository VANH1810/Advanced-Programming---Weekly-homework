#include <bits/stdc++.h>
#define taskname ""
using namespace std;
const int N = 1e6+1;
int n,q,t;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen(taskname".in","r",stdin);
    //freopen(taskname".out","w",stdout);
    cin >> n >> q;
    vector<vector<int>> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> t;
        a[i].resize(t);
        for(int j = 0; j < t; j++)
        {
            cin >> a[i][j] ;
        }
    }
    int x, y;
    while(q--)
    {
        cin >> x >> y;
        cout << a[x][y] << '\n';
    }

    return 0;
}
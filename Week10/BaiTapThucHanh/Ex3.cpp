#include <bits/stdc++.h>
#define taskname ""
using namespace std;
const int N = 1e6+1;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen(taskname".in","r",stdin);
    //freopen(taskname".out","w",stdout);
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int tem;
    for(int l = 1; l <= n-2; l++)
    {
        tem = n;
        if(l>1 && a[l] == a[l-1]) continue;
        for(int r = l+1; r <= n-1; r++)
        {
            if(r > l + 1 && a[r] == a[r-1]) continue;
            while(tem > r && a[tem] + a[l] + a[r] > 0) tem--;
            if(tem > r && a[tem] + a[l] + a[r] == 0) cout << a[l] << " " << a[r] << " " << a[tem] << endl;
        }

    }
}
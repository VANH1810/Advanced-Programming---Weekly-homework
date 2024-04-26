#include <bits/stdc++.h>
#define taskname ""
using namespace std;
const int N = 11;
int n, m;
vector<int> arr1;
vector<int> arr2;
int maxArr2 = INT_MIN;

int lcm(int a, int b) 
{
    return a / __gcd(a, b) * b;
}

void Read () {
    cin >> n >> m;
    arr1.resize(n);   
    arr2.resize(m);
    
    for(int i = 0; i < n; i++) cin >> arr1[i];
    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
        maxArr2 = max(maxArr2, arr2[i]);
    }
}


void Solve () {
    
    int result = arr1[0];
    for (int i = 1; i < n; ++i) 
    {
        result = lcm(result, arr1[i]);
    }

    vector <int> tem;
    while(result <= maxArr2)
    {
        tem.push_back(result);
        result += result;
    }
    int cnt = 0;
    for(auto x : tem)
    {
        bool check = true;
        for(int i = 0; i < m; i++)
        {
            if(arr2[i] % x != 0)
            {
                check = false;
                break;
            }
        }
        if(check) cnt++;
    }
    cout << cnt;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen(taskname".in","r",stdin);
    //freopen(taskname".out","w",stdout);
    Read();
    Solve();
    return 0;
}
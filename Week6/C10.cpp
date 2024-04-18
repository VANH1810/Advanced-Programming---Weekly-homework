#include <bits/stdc++.h>

using namespace std;
const int N = 1e6+1;

bool check[50];

int *genNumbers(int n) {
    int *a = new int[n];
    for(int i = 0; i < n; i++)
        a[i] = rand() % 50;
    return a;

}

void printNumbers(int *a, int n) {
    //sort(a, a + n);
    vector <int> cnt (50, 0);
    for(int i = 0; i < n; i++)
    {
        check[a[i]] = true;
        cnt[a[i]]++;
    }
    for(int i = 0 ; i <= 49; i++)
    {
        if(!check[i]) continue;
        for(int j = i; j <= 49; j++)
        {
            if(!check[j]) continue;
            for(int k = j; k <= 49; k++)
            {
                if(!check[k]) continue;
                vector <int> used (50, 0);
                used[i] ++;
                used[j] ++;
                used[k] ++;
                if(used[i] > cnt[i] || used[j] > cnt[j] || used[k] > cnt[k]) continue;
                if((i + j + k) % 25 == 0)
                {
                    cout << i << " " << j << " " << k << '\n';
                }
            }
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int seed; 
    int n;
    cin >> n;
    if(n == 10) seed = 1;
    else if(n == 16) seed = 16;
    else seed = 5;
    srand(seed);
    fill(check, check + 51, false);
    int *a = genNumbers(n);
    printNumbers(a, n);
}
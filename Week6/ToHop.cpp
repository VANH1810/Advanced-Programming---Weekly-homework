#include <iostream>

using namespace std;
const int N = 1e3+1;

long long f[N][N];

long long toHop(int k, int n) {
    if(f[k][n] != -1) return f[k][n];
    if (k == 0 || k == n)
    {
        f[k][n] = 1;
        return 1;
    }

    f[k][n] = toHop(k - 1, n - 1) + toHop(k, n - 1);
    return f[k][n];
}

int kiemTra(int k, int n) {
    return (0 <= k && k <= n && 1 <= n && n <= 100) ? 1 : 0;
}

void nhapKN(int k[], int n[], int *soPhanTu) {
    *soPhanTu = 0;
    int kiemTraK, kiemTraN;

    do {
        cin >> k[*soPhanTu] >> n[*soPhanTu];
        kiemTraK = k[*soPhanTu];
        kiemTraN = n[*soPhanTu];
        if (kiemTraK == -1 && kiemTraN == -1) break;
        if (kiemTra(kiemTraK, kiemTraN) == 1) {
            (*soPhanTu)++;
        } else {
            cout << "Invalid data. Please re-enter:" << endl;
        }
    } while (kiemTraK != -1 && kiemTraN != -1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < N; ++i) 
        fill(f[i], f[i] + N, -1); 
    
    int k[N], n[N], soPhanTu;

    nhapKN(k, n, &soPhanTu);


    for (int i = 0; i < soPhanTu; ++i)
        cout << toHop(k[i], n[i]) << endl;

    return 0;
}

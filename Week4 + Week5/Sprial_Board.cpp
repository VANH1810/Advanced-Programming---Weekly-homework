#include <bits/stdc++.h>
using namespace std;

const int N=1e3+1;
const int M=1e3+1;

void create_sprial_board(vector<vector<int>> &a, int &m, int &n)
{
    int top = 0, bottom = m - 1, left = 0, right = n - 1;
    int num = 1;
    int direction = 0;
    while (top <= bottom && left <= right)
    {
        if(direction == 0)
        {
            for(int i = left; i <= right; i++)
                a[top][i] = num++;
            top++;
        }
        else if(direction == 1)
        {
            for(int i = top; i <= bottom; i++)
                a[i][right] = num++;
            right--;
        }
        else if(direction == 2)
        {
            for(int i = right; i >= left; i--)
                a[bottom][i] = num++;
            bottom--;
        }
        else
        {
            for(int i = bottom; i >= top; i--)
                a[i][left] = num++;
            left++;
        }
        direction = (direction + 1) % 4;
        
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int m,n;
    cin >> m >> n;
    vector<vector<int>> a(m, vector<int>(n, 0));
    create_sprial_board(a, m, n);
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

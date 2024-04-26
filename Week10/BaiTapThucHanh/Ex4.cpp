#include <bits/stdc++.h>
#define taskname ""
using namespace std;
const int N = 1e3+1;
int rows, cols;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen(taskname".in","r",stdin);
    //freopen(taskname".out","w",stdout);
    cin >> rows >> cols;
    int matrix[N][N];
    for(int i = 0 ; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }
    
    int cnt = 0;
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) 
        {
            int current = matrix[i][j];
            bool isPeak = true;

            
            if (i > 0 && current <= matrix[i - 1][j]) {
                isPeak = false;
            }
            if (i < rows - 1 && current <= matrix[i + 1][j]) {
                isPeak = false;
            }
            if (j > 0 && current <= matrix[i][j - 1]) {
                isPeak = false;
            }
            if (j < cols - 1 && current <= matrix[i][j + 1]) {
                isPeak = false;
            }

            if (isPeak) {
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}
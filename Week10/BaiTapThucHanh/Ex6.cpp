#include <iostream>
#include <vector>

using namespace std;

int count(int M, int N, int K, const vector<vector<int>>& rectangles) {
    int cnt = 0;

    for (const auto& rect : rectangles) {
        int x = rect[0], y = rect[1], w = rect[2], h = rect[3];
        
        int x_left = max(0,x);
        int y_left = max(0,y);
        int x_right = min(M,x+w);
        int y_right = min(N,y+h);
        if(x_left < x_right && y_left < y_right) cnt ++;
    }

    return cnt;
}

int main() {
    int M, N, K;
    cin >> M >> N >> K;

 
    vector<vector<int>> v(K, vector<int>(4));
    for (int i = 0; i < K; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> v[i][j];
        }
    }

    cout << count(M, N, K, v);

    return 0;
}

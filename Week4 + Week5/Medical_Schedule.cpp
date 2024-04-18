#include <bits/stdc++.h>

using namespace std;

long long minWaitingTime(vector<int>& times) {
    sort(times.begin(), times.end());

    long long totalTime = 0;
    long long waitingTime = 0;

    for (int i = 0; i < times.size(); ++i) {
        waitingTime += times[i];
        totalTime += waitingTime;
    }

    return totalTime;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N; 

    vector<int> times(N);

    for (int i = 0; i < N; ++i) {
        cin >> times[i];
    }

    cout << minWaitingTime(times) << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
const int maxN = 1000;


int main() {
    int N;
    cin >> N;
    if (N % 2 == 0) 
        return 1;

    int magicSquare[100][100] = {0};


    int num = 1;
    int i = 0, j = N / 2;

    while (num <= N * N) {
        magicSquare[i][j] = num;

        int nextI = (i - 1 + N) % N;
        int nextJ = (j + 1) % N;

       
        if (magicSquare[nextI][nextJ] != 0) 
        {
            nextI = (i + 1) % N;
            nextJ = j;
        }

        i = nextI;
        j = nextJ;

        num++;
    }
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << setw(3) << magicSquare[i][j];
        }
        cout << endl;
    }

    return 0;
}

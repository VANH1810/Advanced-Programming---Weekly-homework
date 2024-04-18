#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

char** generateMinefield(int m, int n, int k) {
    char** minefield = new char*[m];
    for (int i = 0; i < m; ++i) {
        minefield[i] = new char[n];
        for (int j = 0; j < n; ++j) {
            minefield[i][j] = '.';
        }
    }

    srand(time(nullptr));
    int mines_placed = 0;
    while (mines_placed < k) {
        int x = rand() % m;
        int y = rand() % n;
        if (minefield[x][y] != '*') {
            minefield[x][y] = '*';
            mines_placed++;
        }
    }

    return minefield;
}

void printBoard(char** board, int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

int countAdjacentMines(char** minefield, int m, int n, int x, int y) {
    int count = 0;
    for (int i = max(0, x - 1); i < min(m, x + 2); ++i) {
        for (int j = max(0, y - 1); j < min(n, y + 2); ++j) {
            if (minefield[i][j] == '*') {
                count++;
            }
        }
    }
    return count;
}

bool revealCell(char** minefield, char** revealed, int m, int n, int x, int y) {
    if (minefield[x][y] == '*') {
        cout << "YOU'RE DEAD!" << endl;
        for (int i = 0; i < m; ++i) {
            delete[] revealed[i];
        }
        delete[] revealed;

        for (int i = 0; i < m; ++i) {
            delete[] minefield[i];
        }
        delete[] minefield;
        return false;
    } else {
        revealed[x][y] = '0' + countAdjacentMines(minefield, m, n, x, y);
        printBoard(revealed, m, n);
        return true;
    }
}

int main() {
    int m, n, k;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;
    cout << "Enter the number of mines: ";
    cin >> k;

    if(k > m*n) k = m*n;

    char** minefield = generateMinefield(m, n, k);
    char** revealed = new char*[m];
    for (int i = 0; i < m; ++i) {
        revealed[i] = new char[n];
        for (int j = 0; j < n; ++j) {
            revealed[i][j] = '.';
        }
    }

    cout << "Blank map:" << endl;
    printBoard(revealed, m, n);

    while (true) {
        int x, y;
        cout << "Enter row coordinates (from 0 to " << m - 1 << "): ";
        cin >> x;
        cout << "Enter column coordinates (from 0 to " << n - 1 << "): ";
        cin >> y;

        if (x < 0 || x >= m || y < 0 || y >= n) {
            cout << "Invalid coordinates, please re-enter. " << endl;
            continue;
        }

        if (!revealCell(minefield, revealed, m, n, x, y)) {
            break;
        }
    }

    for (int i = 0; i < m; ++i) {
        delete[] revealed[i];
    }
    delete[] revealed;

    for (int i = 0; i < m; ++i) {
        delete[] minefield[i];
    }
    delete[] minefield;

    return 0;
}

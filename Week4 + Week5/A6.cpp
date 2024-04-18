#include <iostream>
#include <cstdlib>
#include <ctime>
const int N = 30;
using namespace std;


void bubbleSort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
    
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int arr[N];
    srand(time(NULL));

   
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % RAND_MAX; 
    }

    cout << "Array before sorting: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    bubbleSort(arr, N);

   
    cout << "Array after sorting: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
/*
Array before sorting: 
30650 32612 1462 25276 25575 7972 23266 8762 21414 888 22643 23066 2445 31596 3292 11347 30664 26699 27847 12599 12908 13995 30727 22685 23561 26793 10958 26175 16511 5494

Array after sorting: 
888 1462 2445 3292 5494 7972 8762 10958 11347 12599 12908 13995 16511 21414 22643 22685 23066 23266 23561 25276 25575 26175 26699 26793 27847 30650 30664 30727 31596 32612
*/
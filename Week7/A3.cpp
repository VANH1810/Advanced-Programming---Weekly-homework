#include <iostream>
using namespace std;

int count_even(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen(taskname".in","r",stdin);
    //freopen(taskname".out","w",stdout);
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]); 

    cout << "The number of even numbers in the first 5 element segment of the array: " << count_even(arr, 5) << endl;
    cout << "The number of even numbers in the last 5 element paragraph of the array: " << count_even(arr + size - 5, 5) << endl;

    return 0;
}

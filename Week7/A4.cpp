#include <iostream>
using namespace std;


int binary_search(int *arr, int left, int right, int target) {

    if (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;

        if (arr[mid] > target)
            return binary_search(arr, left, mid - 1, target);

        return binary_search(arr, mid + 1, right, target);
    }
    
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen(taskname".in","r",stdin);
    //freopen(taskname".out","w",stdout);
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    int result = binary_search(arr, 0, n - 1, target);
    if (result != -1)
        cout << "The element " << target << " is found at point " << result << endl;
    else
        cout << "No found " << target << endl;

    return 0;
}

// The element 5 is found at point 2
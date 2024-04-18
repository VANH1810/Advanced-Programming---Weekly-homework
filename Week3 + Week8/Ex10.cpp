#include <iostream>
#include <cstring> 

using namespace std;


struct Point {
    int x, y;
};


struct ArrayStruct {
    int arr[5];
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen(taskname".in","r",stdin);
    //freopen(taskname".out","w",stdout);
    
    ArrayStruct originalArrayStruct;
    for (int i = 0; i < 5; ++i) {
        originalArrayStruct.arr[i] = i;
    }

    ArrayStruct copiedArrayStruct = originalArrayStruct;
    originalArrayStruct.arr[0] = 99;

    cout << "Original array values:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << originalArrayStruct.arr[i] << " ";
    }
    cout << endl;

    cout << "Copied array values:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << copiedArrayStruct.arr[i] << " ";
    }
    cout << endl;

   
    Point originalPoint = {10, 20};
    Point copiedPoint = originalPoint;
    originalPoint.x = 99;

    cout << "Original Point: (" << originalPoint.x << ", " << originalPoint.y << ")" << endl;
    cout << "Copied Point: (" << copiedPoint.x << ", " << copiedPoint.y << ")" << endl;

    return 0;
}

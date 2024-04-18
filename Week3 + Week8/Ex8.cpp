#include <iostream>

using namespace std;


struct Point {
    int x, y;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen(taskname".in","r",stdin);
    //freopen(taskname".out","w",stdout);
    Point point;

    cout << "Address of point: " << &point << endl;
    cout << "Address of x: " << &point.x << endl;
    cout << "Address of y: " << &point.y << endl;

    return 0;
}
/*
Address of point: 0x61fe18
Address of x: 0x61fe18
Address of y: 0x61fe1c
*/
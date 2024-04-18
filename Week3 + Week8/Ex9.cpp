#include <iostream>

using namespace std;

struct Point {
    int x, y;
};


void changeByValue(Point p) {
    cout << "Inside changeByValue:" << endl;
    cout << "Address of p: " << &p << endl;
    p.x = 20;
    p.y = 30;
}


void changeByReference(Point &p) {
    cout << "Inside changeByReference:" << endl;
    cout << "Address of p: " << &p << endl;
    p.x = 20;
    p.y = 30;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen(taskname".in","r",stdin);
    //freopen(taskname".out","w",stdout);
    
    Point point;
    point.x = 10;
    point.y = 12;

   
    cout << "Address of point: " << &point << endl;


    cout << "Before change:" << endl;
    cout << "Point coordinates: (" << point.x << ", " << point.y << ")" << endl;

    changeByValue(point);
    cout << "After changeByValue:" << endl;
    cout << "Point coordinates: (" << point.x << ", " << point.y << ")" << endl;

    changeByReference(point);
    cout << "After changeByReference:" << endl;
    cout << "Point coordinates: (" << point.x << ", " << point.y << ")" << endl;

    return 0;
}
/*
Address of point: 0x61fe18
Before change:
Point coordinates: (10, 12)
Inside changeByValue:
Address of p: 0x61fdf0
After changeByValue:
Point coordinates: (10, 12)
Inside changeByReference:
Address of p: 0x61fe18
After changeByReference:
Point coordinates: (20, 30)
*/

#include <iostream>

using namespace std;

struct Point {
    int x, y;
};

void changeByValue(Point p) {
    p.x = 20;
    p.y = 30;
}

void changeByReference(Point &p) {
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

    cout << "Before changing:" << endl;
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
Before changing:
Point coordinates: (10, 12)
After changeByValue:
Point coordinates: (10, 12)
After changeByReference:
Point coordinates: (20, 30)
*/
#include <iostream>

using namespace std;

struct Point {
    int x, y;
};


Point mid_point(const Point& p1, const Point& p2) 
{
    Point mid;
    mid.x = (p1.x + p2.x) / 2;
    mid.y = (p1.y + p2.y) / 2;
    return mid;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen(taskname".in","r",stdin);
    //freopen(taskname".out","w",stdout);
    Point point1 = {2, 4};
    Point point2 = {6, 8};

    Point mid = mid_point(point1, point2);
    cout << "Midpoint coordinates: (" << mid.x << ", " << mid.y << ")" << endl;

    return 0;
}

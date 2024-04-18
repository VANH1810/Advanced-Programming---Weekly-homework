#include <iostream>

using namespace std;

struct Point {
    int x, y;
};


struct Rect {
    int x, y; 
    int w, h; 

    bool contains(const Point& p) const {
        return (p.x >= x && p.x <= x + w && p.y >= y && p.y <= y + h);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen(taskname".in","r",stdin);
    //freopen(taskname".out","w",stdout);
    const Rect rect = {2, 2, 5, 5};
    const Point point_inside = {4, 4};
    const Point point_outside = {8, 8};

    cout << "Point: " << "(" << point_inside.x << "," << point_inside.y  << ") " << (rect.contains(point_inside) ? "inside Rect" : "outside Rect") << endl;
    cout << "Point: " << "(" << point_outside.x << "," << point_outside.y  << ") " << (rect.contains(point_outside) ? "inside Rect" : "outside Rect") << endl;
    return 0;
}

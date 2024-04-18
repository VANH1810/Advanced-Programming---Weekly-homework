#include <iostream>

using namespace std;

struct Point 
{
    int x, y;
};


void print(Point p) 
{
    cout << "(" << p.x << ", " << p.y << ")";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen(taskname".in","r",stdin);
    //freopen(taskname".out","w",stdout);
    Point point;
    point.x = 10;
    point.y = 12;
    print(point);
    return 0;
}

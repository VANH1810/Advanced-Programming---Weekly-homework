#include <iostream>
#include <string>

using namespace std;

struct Point {
    int x, y;
};


struct Rect {
    int x, y; 
    int w, h; 
};


struct Ship {
    Rect rect;  
    string id;   
    int dx, dy;  

  
    void move() {
        rect.x += dx;
        rect.y += dy;
    }
};

void display(const Ship& ship) {
    cout << "Ship ID: " << ship.id << endl;
    cout << "Ship coordinates: (" << ship.rect.x << ", " << ship.rect.y << ")" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen(taskname".in","r",stdin);
    //freopen(taskname".out","w",stdout);
    
    Ship ship;
    ship.rect = {3, 5, 10, 5}; 
    ship.id = "23021471";
    ship.dx = 2;
    ship.dy = 3;

    ship.move();
    display(ship);

    return 0;
}

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
    
    Ship ship1 = {{2, 3, 10, 5}, "Ship1", 1, 2};
    Ship ship2 = {{5, 7, 8, 4}, "Ship2", -2, 1};

    int loop = 0;
    while (loop < 10) 
    {
        ship1.move();
        ship2.move();
        display(ship1);
        display(ship2);
        loop++;
    }

    return 0;
}

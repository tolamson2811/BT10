#include <iostream>
using namespace std;
struct point {
    int x;
    int y;
    point(int x, int y) {
        this-> x = x;
        this-> y = y;
    }
};

void print(point p) {
    cout << "(" << p.x << "," << p.y << ")" << endl;
}

int main() {
    point p(2, 3);
    print(p);
    return 0;
}
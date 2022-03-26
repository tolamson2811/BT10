#include <iostream>
using namespace std;
struct Point {
    double x;
    double y;

    Point() {

    }

    Point(double x, double y) {
        this-> x = x;
        this-> y = y;
    }
    
};

Point mid_point(const Point a,const Point b) {
    Point c;
    c.x = (a.x + b.x) / 2;
    c.y = (a.y + b.y) / 2;
    return c;
}

int main() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    Point p1(x1, y1);
    Point p2(x2, y2);
    Point p = mid_point(p1, p2);
    cout << "(" << p.x << "," << p.y << ")" << endl;
    return 0;
}
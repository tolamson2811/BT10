#include <iostream>
using namespace std;
struct Point {
    int x;
    int y;

    Point() {

    }

    Point(int x, int y) {
        this-> x = x;
        this-> y = y;
    }
    
};

int main() {
    int x, y;
    cin >> x >> y;
    Point p(x, y);
    cout << &p << endl;
    cout << &p.x << endl;
    cout << &p.y << endl;   
    return 0;
}

// địa chỉ của p và p.x như nhau còn địa chỉ của p.y cách nột số bit tùy vào kiểu dữ liệu khai báo
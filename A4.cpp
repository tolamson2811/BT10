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
    cout << &p << endl; //0x61feb0
    cout << &p.x << endl; //0x61feb0
    cout << &p.y << endl; //0x61feb4
    return 0;
}

// địa chỉ của p và p.x như nhau còn địa chỉ của p.y cách nột số bit tùy vào kiểu dữ liệu khai báo